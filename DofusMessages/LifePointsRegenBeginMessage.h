#ifndef LIFEPOINTSREGENBEGINMESSAGE_H
#define LIFEPOINTSREGENBEGINMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class LifePointsRegenBeginMessage : public DeserializeInterface {
public:
    unsigned int regenRate = 0;

    void deserialize(CustomDataInput *input);

private:
    void _regenRateFunc(CustomDataInput *input);
};

#endif