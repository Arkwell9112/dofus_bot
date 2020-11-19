#include "PrintFrame.h"
#include "CurrentMapMessage.h"
#include "ChangeMapMessage.h"
#include "../BotCore/MapContext.h"

void PrintFrame::Handle(Packet *packet) {
    if (mapContextModule.getMapContext(packet, &context)) {
        if (isFirst) {
            worldPathModule.initiatePathFinding(MapContext(13, -28), context);
            isFirst = false;
        } else {
            worldPathModule.updatePathFinding(context);
        }
    }
    worldPathModule.executeWorldPath(packet);
}


void PrintFrame::Awake() {

}