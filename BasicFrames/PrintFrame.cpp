#include "PrintFrame.h"

void PrintFrame::Handle(Packet *packet) {
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
    /*
    if (messageNames == nullptr) {
        messageNames = FileLoader::loadFile("C:\\Users\\Edouard\\AnkamaInjector\\DofusProtocol.txt", nullptr);
    }
    int idSize = snprintf(nullptr, 0, "|%d|", packet->getPacketId());
    char idName[idSize + 1];
    snprintf(idName, idSize + 1, "|%d|", packet->getPacketId());
    char *name = strstr(messageNames, idName);
    if (name != nullptr) {
        int nameSize = 0;
        while (name[nameSize] != "\r"[0]) {
            nameSize++;
        }
        char fullName[nameSize + 1];
        memcpy(fullName, name, nameSize);
        fullName[nameSize] = "\0"[0];
        printf("%s\n", fullName);
    }
     */
}

void PrintFrame::Awake() {

}