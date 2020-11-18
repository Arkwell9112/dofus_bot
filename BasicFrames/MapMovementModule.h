#ifndef DOFUS2BOTPREALPHA_0_2_MAPMOVEMENTMODULE_H
#define DOFUS2BOTPREALPHA_0_2_MAPMOVEMENTMODULE_H

#include "../BotCore/Packet.h"
#include "../MapTools/MapPoint.h"
#include "../BotCore/MapContext.h"
#include "../MapTools/MovementPath.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../BotCore/PacketSender.h"

class MapMovementModule {
public:
    void initiateMapMovement(MapPoint destination, MapContext context);

    bool executeMovement(Packet *packet);

private:
    bool isWaitingConfirmation = false;
    clock_t timeoutPoint = 0;
    bool isTimeout = false;
};


#endif //DOFUS2BOTPREALPHA_0_2_MAPMOVEMENTMODULE_H
