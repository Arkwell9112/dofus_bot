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

void WorldNode::setParent(MapContext parent0) {
    unsigned int border = 0;
    if (parent0.getPosX() > position.getPosX()) {
        border = 2;
    } else if (parent0.getPosY() > position.getPosY()) {
        border = 4;
    } else if (parent0.getPosX() < position.getPosX()) {
        border = 6;
    }
    std::vector<MapPoint> borderCells = position.getOpenBorderCells(border);
    entryPosition = borderCells.at(WorldNode::getLogicalMiddle(borderCells.size()));
    parent = parent0;
}

unsigned int WorldNode::getLogicalMiddle(unsigned int value) {
    return (value - (value % 2)) / 2;
}

void WorldNode::setCost(MapContext destination) {
    cost = sqrt(
            pow(destination.getPosX() - position.getPosX(), 2) + pow(destination.getPosY() - position.getPosY(), 2));
}

void WorldNode::setEntryPosition(MapPoint entry) {
    this->entryPosition = entry;
}
