#include <cstdio>
#include "MovementPath.h"

MovementPath::MovementPath(std::vector<MapPoint> points) {
    unsigned int lastOrientation = 0;
    for (int i = 0; i < points.size() - 1; i++) {
        lastOrientation = points.at(i).orientationTo(points.at(i + 1));
        points.at(i).setOrientation(lastOrientation);
    }
    points.at(points.size() - 1).setOrientation(lastOrientation);
    this->start = points.at(0);
    this->end = points.at(points.size() - 1);
    this->path = points;
}

void MovementPath::compressPath() {
    std::vector<MapPoint> newPath;
    newPath.push_back(this->start);
    for (int i = 1; i < this->path.size(); i++) {
        if (this->path.at(i).getOrientation() != this->path.at(i - 1).getOrientation()) {
            newPath.push_back(this->path.at(i));
        }
    }
    this->path = newPath;
}

std::vector<unsigned int> MovementPath::toServerMovements() {
    this->compressPath();
    std::vector<unsigned int> movements;
    for (int i = 0; i < this->path.size(); i++) {
        unsigned int movement = ((this->path.at(i).getOrientation() & 7) << 12) | (this->path.at(i).getCellId() & 4095);
        movements.push_back(movement);
    }
    unsigned int movement = ((this->end.getOrientation() & 7) << 12) | (this->end.getCellId() & 4095);
    movements.push_back(movement);
    return movements;
}

