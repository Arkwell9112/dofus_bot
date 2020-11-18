#include "MapPoint.h"
#include "DirectionEnum.h"

bool MapPoint::isInit = false;
MapPoint MapPoint::cellPos[560]{};

void MapPoint::initCellPos() {
    int startX = 0;
    int startY = 0;
    unsigned int cell = 0;
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 14; j++) {
            MapPoint::cellPos[cell] = MapPoint(startX + j, startY + j);
            cell++;
        }
        startX++;
        for (int j = 0; j < 14; j++) {
            MapPoint::cellPos[cell] = MapPoint(startX + j, startY + j);
            cell++;
        }
        startY--;
    }
    MapPoint::isInit = true;
}

MapPoint::MapPoint(int posX, int posY) {
    this->posX = posX;
    this->posY = posY;
    this->cellId = (posX - posY) * 14 + posY + (posX - posY) / 2;
}

MapPoint::MapPoint(unsigned int cellId) {
    if (!MapPoint::isInit) {
        MapPoint::initCellPos();
    }
    MapPoint point = MapPoint::cellPos[cellId];
    this->posX = point.getPosX();
    this->posY = point.getPosY();
    this->cellId = point.getCellId();
}

int MapPoint::getPosX() const {
    return posX;
}

int MapPoint::getPosY() const {
    return posY;
}

unsigned int MapPoint::getCellId() const {
    return cellId;
}

unsigned int MapPoint::orientationTo(MapPoint point) {
    DirectionEnum directions;
    if (posX == point.getPosX() && posY == point.getPosY()) {
        return directions.DOWN_RIGHT;
    }

    int ptX = point.getPosX() > posX ? 1 : point.getPosX() < posX ? -1 : 0;
    int ptY = point.getPosY() > posY ? 1 : point.getPosY() < posY ? -1 : 0;

    if (ptX == directions.VECTOR_RIGHT.getPosX() && ptY == directions.VECTOR_RIGHT.getPosY()) {
        return directions.RIGHT;
    } else if (ptX == directions.VECTOR_DOWN_RIGHT.getPosX() && ptY == directions.VECTOR_DOWN_RIGHT.getPosY()) {
        return directions.DOWN_RIGHT;
    } else if (ptX == directions.VECTOR_DOWN.getPosX() && ptY == directions.VECTOR_DOWN.getPosY()) {
        return directions.DOWN;
    } else if (ptX == directions.VECTOR_DOWN_LEFT.getPosX() && ptY == directions.VECTOR_DOWN_LEFT.getPosY()) {
        return directions.DOWN_LEFT;
    } else if (ptX == directions.VECTOR_LEFT.getPosX() && ptY == directions.VECTOR_LEFT.getPosY()) {
        return directions.LEFT;
    } else if (ptX == directions.VECTOR_UP_LEFT.getPosX() && ptY == directions.VECTOR_UP_LEFT.getPosY()) {
        return directions.UP_LEFT;
    } else if (ptX == directions.VECTOR_UP.getPosX() && ptY == directions.VECTOR_UP.getPosY()) {
        return directions.UP;
    } else if (ptX == directions.VECTOR_UP_RIGHT.getPosX() && ptY == directions.VECTOR_UP_RIGHT.getPosY()) {
        return directions.UP_RIGHT;
    }
    return -1;
}

unsigned int MapPoint::getOrientation() const {
    return orientation;
}

void MapPoint::setOrientation(unsigned int orientation0) {
    this->orientation = orientation0;
}

bool MapPoint::isValidCoord(int param1, int param2) {
    if (param2 >= -param1 && param2 <= param1 && param2 <= 14 + 13 - param1) {
        return param2 >= param1 - (20 - (-19));
    }
    return false;
}
