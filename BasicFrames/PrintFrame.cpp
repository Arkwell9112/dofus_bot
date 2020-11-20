#include "PrintFrame.h"
#include "../BotCore/WorldPath.h"

void PrintFrame::Handle(Packet *packet) {
    if (mapContextModule.getMapContext(packet, &context)) {
        printf("CurrentMapID: %d\n", context.getMapId());
        printf("TopID: %d\n", context.getNeighborIdForChange(0));
        printf("RightID: %d\n", context.getNeighborIdForChange(2));
        printf("BottomID: %d\n", context.getNeighborIdForChange(4));
        printf("LeftID: %d\n", context.getNeighborIdForChange(6));
        if (isFirst) {
            try {
                worldPathModule.initiatePathFinding(MapContext(7, 1), context);
            } catch (BotCoreException &e) {
                printf("%s", e.getMessage());
            }
            isFirst = false;
        } else {
            try {
                worldPathModule.updatePathFinding(context);
            } catch (BotCoreException &e) {
                printf("%s", e.getMessage());
            }
        }
    }
    try {
        worldPathModule.executeWorldPath(packet);
    } catch (BotCoreException &e) {
        printf("%s", e.getMessage());
    }
}


void PrintFrame::Awake() {

}