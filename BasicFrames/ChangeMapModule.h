#ifndef DOFUS2BOTPREALPHA_0_2_CHANGEMAPMODULE_H
#define DOFUS2BOTPREALPHA_0_2_CHANGEMAPMODULE_H

#include "../BotCore/MapContext.h"
#include "MapMovementModule.h"

class ChangeMapModule {
public:
    void initiateMapChange(unsigned int newDirection, MapContext newContext);

    bool executeMapChange(Packet *packet);

private:
    MapMovementModule mapMovementModule;
    MapContext context = MapContext((unsigned int) 0);
    unsigned int direction = 0;
    bool isWaitingConfirmation = false;
};


#endif //DOFUS2BOTPREALPHA_0_2_CHANGEMAPMODULE_H
