#include "MapContext.h"

unsigned int MapContext::getMapId() const {
    return mapId;
}

short MapContext::getPosX() const {
    return posX;
}

short MapContext::getPosY() const {
    return posY;
}

short MapContext::getSubAreaId() const {
    return subAreaId;
}

short MapContext::getWorldMap() const {
    return worldMap;
}

char *MapContext::mapsData = nullptr;
int MapContext::mapsDataSize = 0;

MapContext::MapContext(unsigned int mapId) {
    if (mapsData == nullptr) {
        mapsData = FileLoader::loadFile(std::string("C:\\Users\\Edouard\\Documents\\DofusBot\\MapsData\\MapsData.bin"),
                                        &mapsDataSize);
    }
    for (int i = 0; i < mapsDataSize / blockSize; i++) {
        unsigned int currentBlockOffset = i * blockSize;
        unsigned int currentMapId = *reinterpret_cast<unsigned int *>(&mapsData[currentBlockOffset + mapIdOffset]);
        if (currentMapId == mapId) {
            this->mapId = mapId;
            posX = *reinterpret_cast<short *>(&mapsData[currentBlockOffset + posXOffset]);
            posY = *reinterpret_cast<short *>(&mapsData[currentBlockOffset + posYOffset]);
            subAreaId = *reinterpret_cast<short *>(&mapsData[currentBlockOffset + subAreaIdOffset]);
            worldMap = *reinterpret_cast<short *>(&mapsData[currentBlockOffset + worldMapOffset]);
            topNeighborId = *reinterpret_cast<unsigned int *>(&mapsData[currentBlockOffset + topNeighborIdOffset]);
            rightNeighborId = *reinterpret_cast<unsigned int *>(&mapsData[currentBlockOffset + rightNeighborIdOffset]);
            bottomNeighborId = *reinterpret_cast<unsigned int *>(&mapsData[currentBlockOffset +
                                                                           bottomNeighborIdOffset]);
            leftNeighborId = *reinterpret_cast<unsigned int *>(&mapsData[currentBlockOffset + leftNeighborIdOffset]);
            short box0 = *reinterpret_cast<short *>(&mapsData[currentBlockOffset + box0Offset]);
            if ((box0 & 1) != 0) {
                hasPriorityOnWorldMap = true;
            }
            if ((box0 & 2) != 0) {
                outdoor = true;
            }
            cellsData = &mapsData[currentBlockOffset + cellsOffset];
            break;
        }
    }
}

std::vector<MapPoint> MapContext::getOpenBorderCells(unsigned int orientation) {
    DirectionEnum directionEnum;
    std::vector<MapPoint> openCells;
    MapPoint lastPoint(0, 0);
    int currentPosX = 0;
    int currentPosY = 0;
    for (int i = 0; i < 8; i += 2) {
        MapPoint moveVector = directionEnum.getVectorFromDirection(i);
        bool first = true;
        while (MapPoint::isValidCoord(currentPosX, currentPosY)) {
            lastPoint = MapPoint(currentPosX, currentPosY);
            if (i == orientation && (cellsData[lastPoint.getCellId()] & 1) != 0 &&
                (cellsData[lastPoint.getCellId()] & 2) != 0 && !first && lastPoint.getPosX() != 0 &&
                lastPoint.getPosY() != 0) {
                openCells.push_back(lastPoint);
            }
            currentPosX += moveVector.getPosX();
            currentPosY += moveVector.getPosY();
            first = false;
        }
        if (i == 0 || i == 4) {
            currentPosX = lastPoint.getPosX() + directionEnum.getVectorFromDirection(i + 1).getPosX();
            currentPosY = lastPoint.getPosY() + directionEnum.getVectorFromDirection(i + 1).getPosY();
        } else {
            currentPosX = lastPoint.getPosX();
            currentPosY = lastPoint.getPosY();
        }
    }
    return openCells;
}

std::vector<MapPoint> MapContext::findPath(MapPoint origin, MapPoint destination) {
    DirectionEnum directionEnum;
    std::vector<Node> openList;
    std::vector<Node> closeList;
    Node currentNode(origin);
    bool isBegin = true;
    while (!openList.empty() || isBegin) {
        isBegin = false;
        for (int i = 0; i < 8; i++) {
            int currentPosX = currentNode.getPosition().getPosX() + directionEnum.getVectorFromDirection(i).getPosX();
            int currentPosY = currentNode.getPosition().getPosY() + directionEnum.getVectorFromDirection(i).getPosY();
            if (MapPoint::isValidCoord(currentPosX, currentPosY)) {
                Node newNode(MapPoint(currentPosX, currentPosY));
                if ((cellsData[newNode.getPosition().getCellId()] & 1) != 0) {
                    if (!isNodeinList(closeList, newNode)) {
                        newNode.setParent(currentNode.getPosition());
                        newNode.setCost(destination);
                        MapContext::replaceNodeInList(&openList, newNode);
                    }
                }
            }
        }
        closeList.push_back(currentNode);
        if (openList.empty()) {
            break;
        }
        currentNode = MapContext::getBetterNodeInList(&openList);
        if (currentNode.getPosition().getCellId() == destination.getCellId()) {
            closeList.push_back(currentNode);
            return MapContext::reconstructPathInList(closeList, origin, destination);
        }
    }
    throw BotCoreException(6);
}

bool MapContext::isNodeinList(std::vector<Node> list, Node node) {
    for (int i = 0; i < list.size(); i++) {
        if (list.at(i).getPosition().getCellId() == node.getPosition().getCellId()) {
            return true;
        }
    }
    return false;
}

void MapContext::replaceNodeInList(std::vector<Node> *list, Node node) {
    bool found = false;
    for (int i = 0; i < list->size(); i++) {
        if (list->at(i).getPosition().getCellId() == node.getPosition().getCellId()) {
            found = true;
            list->at(i).setParent(node.getParent());
            break;
        }
    }
    if (!found) {
        list->push_back(node);
    }
}

Node MapContext::getBetterNodeInList(std::vector<Node> *list) {
    double betterCost = 1000000;
    int betterIndex = 0;
    for (int i = 0; i < list->size(); i++) {
        if (list->at(i).getCost() < betterCost) {
            betterCost = list->at(i).getCost();
            betterIndex = i;
        }
    }
    Node betterNode = list->at(betterIndex);
    list->erase(list->begin() + betterIndex);
    return betterNode;
}

std::vector<MapPoint> MapContext::reconstructPathInList(std::vector<Node> list, MapPoint origin, MapPoint destination) {
    std::vector<Node> prePath;
    bool isEnd = false;
    Node currentNode(MapPoint(0, 0));
    for (int i = 0; i < list.size(); i++) {
        if (list.at(i).getPosition().getCellId() == destination.getCellId()) {
            currentNode = list.at(i);
            prePath.push_back(currentNode);
        }
    }
    while (!isEnd) {
        for (int i = 0; i < list.size(); i++) {
            if (list.at(i).getPosition().getCellId() == currentNode.getParent().getCellId()) {
                currentNode = list.at(i);
                prePath.push_back(currentNode);
            }
            if (currentNode.getPosition().getCellId() == origin.getCellId()) {
                isEnd = true;
            }
        }
    }
    std::vector<MapPoint> path;
    for (int i = prePath.size() - 1; i >= 0; i--) {
        path.push_back(prePath.at(i).getPosition());
    }
    return path;
}

unsigned int MapContext::getNeighborId(unsigned int orientation) {
    int neighborX = posX;
    int neighborY = posY;
    switch (orientation) {
        case 0:
            neighborY--;
            break;
        case 2:
            neighborX++;
            break;
        case 4:
            neighborY++;
            break;
        case 6:
            neighborX--;
            break;
        default:
            throw BotCoreException(7);
    }
    std::vector<MapContext> preContexts;
    for (int i = 0; i < mapsDataSize / blockSize; i++) {
        char *directDataPointer = &mapsData[i * blockSize];
        MapContext currentContext(directDataPointer);
        if (currentContext.getPosX() == neighborX && currentContext.getPosY() == neighborY &&
            currentContext.isOutdoor() && currentContext.getWorldMap() == worldMap) {
            if (currentContext.isHasPriorityOnWorldMap()) {
                return currentContext.getMapId();
            }
            preContexts.push_back(currentContext);
        }
    }
    if (preContexts.empty()) {
        throw BotCoreException(7);
    } else if (preContexts.size() == 1) {
        return preContexts.at(0).getMapId();
    } else {
        unsigned int betterDistance = UINT32_MAX;
        unsigned int betterId = 0;
        for (int i = 0; i < preContexts.size(); i++) {
            unsigned int distance = abs(preContexts.at(i).getMapId() - mapId);
            if (distance < betterDistance) {
                betterDistance = distance;
                betterId = preContexts.at(i).getMapId();
            }
        }
        return betterId;
    }
}

MapContext::MapContext(char *directDataPointer) {
    mapId = *reinterpret_cast<unsigned int *>(&directDataPointer[mapIdOffset]);
    posX = *reinterpret_cast<short *>(&directDataPointer[posXOffset]);
    posY = *reinterpret_cast<short *>(&directDataPointer[posYOffset]);
    subAreaId = *reinterpret_cast<short *>(&directDataPointer[subAreaIdOffset]);
    worldMap = *reinterpret_cast<short *>(&directDataPointer[worldMapOffset]);
    topNeighborId = *reinterpret_cast<unsigned int *>(&directDataPointer[topNeighborIdOffset]);
    rightNeighborId = *reinterpret_cast<unsigned int *>(&directDataPointer[rightNeighborIdOffset]);
    bottomNeighborId = *reinterpret_cast<unsigned int *>(&directDataPointer[bottomNeighborIdOffset]);
    leftNeighborId = *reinterpret_cast<unsigned int *>(&directDataPointer[leftNeighborIdOffset]);
    short box0 = *reinterpret_cast<short *>(&directDataPointer[box0Offset]);
    if ((box0 & 1) != 0) {
        hasPriorityOnWorldMap = true;
    }
    if ((box0 & 2) != 0) {
        outdoor = true;
    }
    cellsData = &directDataPointer[cellsOffset];
}

MapContext::MapContext(short posX, short posY) {
    this->posX = posX;
    this->posY = posY;
}

MapPoint MapContext::getPlayerPos() {
    return this->playerPos;
}

void MapContext::setPlayerPos(MapPoint _playerPos) {
    this->playerPos = _playerPos;
}

unsigned int MapContext::getTopNeighborIdOffset() {
    return topNeighborIdOffset;
}

unsigned int MapContext::getRightNeighborIdOffset() {
    return rightNeighborIdOffset;
}

unsigned int MapContext::getBottomNeighborIdOffset() {
    return bottomNeighborIdOffset;
}

unsigned int MapContext::getLeftNeighborIdOffset() {
    return leftNeighborIdOffset;
}

unsigned int MapContext::getNeighborIdForChange(unsigned int direction) {
    switch (direction) {
        case 0:
            return this->topNeighborId;
        case 2:
            return this->rightNeighborId;
        case 4:
            return this->bottomNeighborId;
        case 6:
            return this->leftNeighborId;
    }
    throw BotCoreException(7);
}

bool MapContext::isOutdoor() const {
    return outdoor;
}

bool MapContext::isHasPriorityOnWorldMap() const {
    return hasPriorityOnWorldMap;
}
