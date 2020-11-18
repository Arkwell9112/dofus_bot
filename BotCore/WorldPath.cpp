#include "WorldPath.h"

WorldPath::WorldPath(MapContext origin, MapContext destination) {
    this->origin = origin;
    this->destination = destination;
}

void WorldPath::calculatePath(MapPoint entry) {
    std::vector<WorldNode> openList;
    std::vector<WorldNode> closeList;
    WorldNode currentNode(origin);
    currentNode.setEntryPosition(entry);
    bool isBegin = true;
    while (!openList.empty() || isBegin) {
        isBegin = false;
        for (int i = 0; i < 8; i += 2) {
            std::vector<MapPoint> borderCells = currentNode.getPosition().getOpenBorderCells(i);
            bool pathOk = false;
            try {
                if (!borderCells.empty()) {
                    std::vector<MapPoint> movePath = currentNode.getPosition().findPath(currentNode.getEntryPosition(),
                                                                                        borderCells.at(
                                                                                                WorldNode::getLogicalMiddle(
                                                                                                        borderCells.size())));
                    pathOk = true;
                }
            } catch (BotCoreException &e) {
                pathOk = false;
            }
            if (!borderCells.empty() && pathOk) {
                unsigned int neighborId = 256;
                try {
                    neighborId = currentNode.getPosition().getNeighborId(i);
                } catch (BotCoreException &e) {
                    neighborId = 256;
                }
                if (neighborId != 256) {
                    MapContext newContext(neighborId);
                    WorldNode newNode(newContext);
                    if (!WorldPath::isWorldNodeInList(closeList, newNode)) {
                        newNode.setParent(currentNode.getPosition());
                        newNode.setCost(destination);
                        WorldPath::replaceWorldNodeInList(&openList, newNode);
                    }
                }
            }
        }
        closeList.push_back(currentNode);
        if (openList.empty()) {
            break;
        }
        currentNode = WorldPath::getBetterNodeInList(&openList);
        if (currentNode.getPosition().getPosX() == destination.getPosX() &&
            currentNode.getPosition().getPosY() == destination.getPosY()) {
            closeList.push_back(currentNode);
            path = reconstructPathInList(closeList);
            return;
        }
    }
    throw BotCoreException(6);
}

bool WorldPath::isWorldNodeInList(std::vector<WorldNode> list, WorldNode node) {
    for (int i = 0; i < list.size(); i++) {
        if (list.at(i).getPosition().getPosX() == node.getPosition().getPosX() &&
            list.at(i).getPosition().getPosY() == node.getPosition().getPosY()) {
            return true;
        }
    }
    return false;
}

void WorldPath::replaceWorldNodeInList(std::vector<WorldNode> *list, WorldNode node) {
    bool found = false;
    for (int i = 0; i < list->size(); i++) {
        if (list->at(i).getPosition().getPosX() == node.getPosition().getPosX() &&
            list->at(i).getPosition().getPosY() == node.getPosition().getPosY()) {
            found = true;
            list->at(i).setParent(node.getParent());
            break;
        }
    }
    if (!found) {
        list->push_back(node);
    }
}

WorldNode WorldPath::getBetterNodeInList(std::vector<WorldNode> *list) {
    int betterIndex = 0;
    double betterCost = 1000000;
    for (int i = 0; i < list->size(); i++) {
        if (list->at(i).getCost() < betterCost) {
            betterIndex = i;
            betterCost = list->at(i).getCost();
        }
    }
    WorldNode betterNode = list->at(betterIndex);
    list->erase(list->begin() + betterIndex);
    return betterNode;
}

std::vector<MapContext> WorldPath::reconstructPathInList(std::vector<WorldNode> list) {
    std::vector<WorldNode> prePath;
    bool isEnd = false;
    WorldNode currentNode(MapContext(0, 0));
    for (int i = 0; i < list.size(); i++) {
        if (list.at(i).getPosition().getPosX() == destination.getPosX() &&
            list.at(i).getPosition().getPosY() == destination.getPosY()) {
            currentNode = list.at(i);
            prePath.push_back(currentNode);
        }
    }
    while (!isEnd) {
        for (int i = 0; i < list.size(); i++) {
            if (list.at(i).getPosition().getPosX() == currentNode.getParent().getPosX() &&
                list.at(i).getPosition().getPosY() == currentNode.getParent().getPosY()) {
                currentNode = list.at(i);
                prePath.push_back(currentNode);
            }
            if (currentNode.getPosition().getPosX() == origin.getPosX() &&
                currentNode.getPosition().getPosY() == origin.getPosY()) {
                isEnd = true;
            }
        }
    }
    std::vector<MapContext> currentPath;
    for (int i = prePath.size() - 1; i >= 0; i--) {
        currentPath.push_back(prePath.at(i).getPosition());
    }
    return currentPath;
}

std::vector<MapContext> WorldPath::getPath() {
    return this->path;
}
