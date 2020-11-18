#include <cmath>
#include "Node.h"

Node::Node(MapPoint position) {
    this->position = position;
}

void Node::setCost(MapPoint destination) {
    cost = sqrt(
            pow(destination.getPosX() - position.getPosX(), 2) + pow(destination.getPosY() - position.getPosY(), 2));
}

const MapPoint &Node::getPosition() const {
    return position;
}

const MapPoint &Node::getParent() const {
    return parent;
}

void Node::setParent(const MapPoint &parent) {
    Node::parent = parent;
}

double Node::getCost() const {
    return cost;
}