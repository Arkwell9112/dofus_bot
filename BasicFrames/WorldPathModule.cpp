#include "WorldPathModule.h"

void WorldPathModule::initiatePathFinding(MapContext destination, MapContext context) {
    if (destination.getPosX() != context.getPosX() || destination.getPosY() != context.getPosY()) {
        WorldPath path(context, destination);
        path.calculatePath(context.getPlayerPos());
        this->worldPath = path.getPath();
        this->pathPosition = 1;
        changeMapModule.initiateMapChange(directionOfMap(context, worldPath.at(pathPosition)), context);
        pathPosition += 1;
        isWaitingForConfirmation = true;
    }
}

unsigned int WorldPathModule::directionOfMap(MapContext origin, MapContext destination) {
    if (destination.getPosX() > origin.getPosX()) {
        return 2;
    } else if (destination.getPosX() < origin.getPosX()) {
        return 6;
    } else if (destination.getPosY() > origin.getPosY()) {
        return 4;
    } else if (destination.getPosY() < origin.getPosY()) {
        return 0;
    }
    throw BotCoreException(7);
}

bool WorldPathModule::updatePathFinding(MapContext newContext) {
    if (newContext.getPosX() == worldPath.at(worldPath.size() - 1).getPosX() &&
        newContext.getPosY() == worldPath.at(worldPath.size() - 1).getPosY() && isWaitingForConfirmation) {
        isWaitingForConfirmation = false;
        return true;
    }
    if (isWaitingForConfirmation) {
        changeMapModule.initiateMapChange(directionOfMap(newContext, worldPath.at(pathPosition)), newContext);
        pathPosition += 1;
    }
    return false;
}

void WorldPathModule::executeWorldPath(Packet *packet) {
    if (isWaitingForConfirmation) {
        changeMapModule.executeMapChange(packet);
    }
}
