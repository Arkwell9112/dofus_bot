#include <cmath>
#include "WorldNode.h"

MapContext WorldNode::getPosition() {
    return position;
}

const MapContext &WorldNode::getParent() const {
    return parent;
}

const MapPoint &WorldNode::getEntryPosition() const {
    return entryPosition;
}

double WorldNode::getCost() const {
    return cost;
}

WorldNode::WorldNode(MapContext position) {
    this->position = position;
    this->entryPosition = MapPoint(0, 0);
}

void WorldNode::setParent(MapContext parent0, unsigned int testingOrientation) {
    unsigned int realOrientation = (testingOrientation + 4) % 8;
    std::vector<MapPoint> borderCells = position.getOpenBorderCells(realOrientation);
    if (!borderCells.empty()) {
        entryPosition = borderCells.at(getLogicalMiddle(borderCells.size()));
    } else {
        entryPosition = MapPoint(16, 0);
    }
    parent = parent0;
}

unsigned int WorldNode::getLogicalMiddle(unsigned int value) {
    return (value - (value % 2)) / 2;
}

void WorldNode::setCost(MapContext destination, unsigned int additiveCost) {
    cost = sqrt(
            pow(destination.getPosX() - position.getPosX(), 2) + pow(destination.getPosY() - position.getPosY(), 2)) +
           additiveCost;
}

void WorldNode::setEntryPosition(MapPoint entry) {
    this->entryPosition = entry;
}
