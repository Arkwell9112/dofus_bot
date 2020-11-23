#include "PrintFrame.h"
#include "../BotCore/WorldPath.h"

void PrintFrame::Handle(Packet *packet) {
    if (mapContextModule.getMapContext(packet, &context)) {
        if (isFirst) {
            isFirst = false;
            try {
                worldPathModule.initiatePathFinding(MapContext(-13, -41), context);
            } catch (BotCoreException &e) {
                printf("%s", e.getMessage());
            }
        } else {
            try {
                worldPathModule.updatePathFinding(context);
            } catch (BotCoreException &e) {
                printf("%s", e.getMessage());
            }
        }
    }
    worldPathModule.executeWorldPath(packet);
}


void PrintFrame::Awake() {

}