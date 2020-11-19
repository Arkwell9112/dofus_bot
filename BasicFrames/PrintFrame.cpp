#include "PrintFrame.h"
#include "CurrentMapMessage.h"
#include "ChangeMapMessage.h"
#include "../BotCore/MapContext.h"

void PrintFrame::Handle(Packet *packet) {
    if (packet->getPacketId() == 7422) {
        packet->deserializePacket();
        auto *message = dynamic_cast<CurrentMapMessage *>(packet->getMessage());
        MapContext context((unsigned int) message->mapId);
        printf("CurrentID: %d\n", context.getMapId());
        printf("CurrentCapa: %d\n", context.getCapabilities());
    }
    if (packet->getPacketId() == 3575) {
        packet->deserializePacket();
        auto *message = dynamic_cast<ChangeMapMessage *>(packet->getMessage());
        MapContext context((unsigned int) message->mapId);
        printf("NextID: %d\n", context.getMapId());
        printf("NextCapa: %d\n", context.getCapabilities());
    }
    if (mapContextModule.getMapContext(packet, &context)) {
        printf("MapID: %d\n", context.getMapId());
        try {
            printf("TopID: %d\n", context.getNeighborId(0));
        } catch (BotCoreException &e) {
            printf("No Top\n");
        }
        try {
            printf("RightID: %d\n", context.getNeighborId(2));
        } catch (BotCoreException &e) {
            printf("No Right\n");
        }
        try {
            printf("BottomID: %d\n", context.getNeighborId(4));
        } catch (BotCoreException &e) {
            printf("No Bottom\n");
        }
        try {
            printf("LeftID: %d\n", context.getNeighborId(6));
        } catch (BotCoreException &e) {
            printf("No Left\n");
        }
        if (isFirst) {
            try {
                worldPathModule.initiatePathFinding(MapContext(5, -18), context);
            } catch (BotCoreException &e) {
                printf("%s", e.getMessage());
            }
            isFirst = false;
        } else {
            worldPathModule.updatePathFinding(context);
        }
    }
    worldPathModule.executeWorldPath(packet);
}

void PrintFrame::Awake() {

}