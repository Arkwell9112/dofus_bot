#include "PrintFrame.h"
#include "ChangeMapMessage.h"

void PrintFrame::Handle(Packet *packet) {
    if (mapContextModule.getMapContext(packet, &context)) {
        if (isFirst) {
            try {
                worldPathModule.initiatePathFinding(MapContext(-11, -41), context);
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