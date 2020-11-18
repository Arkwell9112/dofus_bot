#include "MapMovementModule.h"

void MapMovementModule::initiateMapMovement(MapPoint destination, MapContext context) {
    std::vector<MapPoint> prePath = context.findPath(context.getPlayerPos(), destination);
    MovementPath path(prePath);
    std::vector<unsigned int> serverPath = path.toServerMovements();
    char packetContent[10 + serverPath.size() * 2];
    CustomDataOutput output(packetContent);
    output.writeUnsignedShort(serverPath.size());
    for (int i = 0; i < serverPath.size(); i++) {
        output.writeUnsignedShort(serverPath.at(i));
    }
    output.writeDouble(context.getMapId());
    auto *toSend = new Packet(7064, 0, nullptr, output.getPosition(), packetContent);
    PacketSender::getInstance()->addPacketToSend(toSend);
    isWaitingConfirmation = true;
    timeoutPoint = clock();
    isTimeout = true;
}

bool MapMovementModule::executeMovement(Packet *packet) {
    if (packet->getPacketId() == 7525 && isWaitingConfirmation) {
        isWaitingConfirmation = false;
        return true;
    }
    if (isWaitingConfirmation && clock() - timeoutPoint > 10000 && isTimeout) {
        auto *toSend = new Packet(7525, 0, nullptr, 0, nullptr);
        PacketSender::getInstance()->addPacketToSend(toSend);
        isTimeout = false;
        return true;
    }
    return false;
}
