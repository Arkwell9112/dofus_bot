#include "ChangeMapModule.h"
#include "../BotCore/WorldNode.h"

void ChangeMapModule::initiateMapChange(unsigned int newDirection, MapContext newContext) {
    this->context = newContext;
    this->direction = newDirection;
    std::vector<MapPoint> borderCells = context.getOpenBorderCells(direction);
    if (borderCells.empty()) {
        throw BotCoreException(8);
    }
    mapMovementModule.initiateMapMovement(borderCells.at(WorldNode::getLogicalMiddle(borderCells.size())), context);
}

bool ChangeMapModule::executeMapChange(Packet *packet) {
    if (mapMovementModule.executeMovement(packet)) {
        char packetContent[9];
        CustomDataOutput output(packetContent);
        unsigned int neighborId = context.getNeighborId(direction);
        printf("SentID: %d\n", neighborId);
        output.writeDouble(neighborId);
        output.writeBoolean(false);
        auto *toSend = new Packet(3575, 0, nullptr, output.getPosition(), packetContent);
        PacketSender::getInstance()->addPacketToSend(toSend);
        isWaitingConfirmation = true;
    }
    if (packet->getPacketId() == 7422 && isWaitingConfirmation) {
        isWaitingConfirmation = false;
        return true;
    }
    return false;
}
