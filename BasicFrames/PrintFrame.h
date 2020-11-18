#ifndef DOFUS2BOTPREALPHA_0_2_PRINTFRAME_H
#define DOFUS2BOTPREALPHA_0_2_PRINTFRAME_H

#include "../BotCore/BaseFrame.h"
#include "MapContextModule.h"
#include "WorldPathModule.h"

class PrintFrame : public BaseFrame {
public:
    void Handle(Packet *packet) override;

    void Awake() override;

private:
    WorldPathModule worldPathModule;
    MapContextModule mapContextModule;
    MapContext context = MapContext((unsigned int) 0);
    bool isFirst = true;
    char *messageNames = nullptr;
};

#endif //DOFUS2BOTPREALPHA_0_2_PRINTFRAME_H