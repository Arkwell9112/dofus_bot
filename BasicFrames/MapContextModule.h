#ifndef DOFUS2BOTPREALPHA_0_2_MAPCONTEXTMODULE_H
#define DOFUS2BOTPREALPHA_0_2_MAPCONTEXTMODULE_H

#include "../BotCore/Packet.h"
#include "../BotCore/MapContext.h"

class MapContextModule {
public:
    bool getMapContext(Packet *packet, MapContext *pMapContext);

private:
    MapContext context = MapContext((unsigned int) 0);
};


#endif //DOFUS2BOTPREALPHA_0_2_MAPCONTEXTMODULE_H
