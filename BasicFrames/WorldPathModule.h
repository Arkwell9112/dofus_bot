#ifndef DOFUS2BOTPREALPHA_0_2_WORLDPATHMODULE_H
#define DOFUS2BOTPREALPHA_0_2_WORLDPATHMODULE_H

#include "../BotCore/WorldPath.h"
#include "ChangeMapModule.h"

class WorldPathModule {
public:
    void initiatePathFinding(MapContext destination, MapContext context);

    bool updatePathFinding(MapContext newContext);

    void executeWorldPath(Packet *packet);

private:
    unsigned int directionOfMap(MapContext origin, MapContext destination);

    ChangeMapModule changeMapModule;
    std::vector<MapContext> worldPath;
    unsigned int pathPosition = 0;
    bool isWaitingForConfirmation = false;
};


#endif //DOFUS2BOTPREALPHA_0_2_WORLDPATHMODULE_H
