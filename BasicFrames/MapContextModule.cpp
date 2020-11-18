#include "MapContextModule.h"
#include "CurrentMapMessage.h"
#include "MapComplementaryInformationsDataMessage.h"

bool MapContextModule::getMapContext(Packet *packet, MapContext *pMapContext) {
    if (packet->getPacketId() == 7422) {
        packet->deserializePacket();
        auto *message = reinterpret_cast<CurrentMapMessage *>(packet->getMessage());
        context = MapContext((unsigned int) message->mapId);
    }
    if (packet->getPacketId() == 9732) {
        packet->deserializePacket();
        auto *message = reinterpret_cast<MapComplementaryInformationsDataMessage *>(packet->getMessage());
        if (message->mapId == context.getMapId()) {
            for (int i = 0; i < message->actors.size(); i++) {
                if (message->actors.at(i).contextualId == 337467539667) {
                    context.setPlayerPos(MapPoint(message->actors.at(i).disposition.cellId));
                    *pMapContext = context;
                    return true;
                }
            }
        }
    }
    return false;
}
