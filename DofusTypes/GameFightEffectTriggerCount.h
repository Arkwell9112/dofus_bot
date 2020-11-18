#ifndef GAMEFIGHTEFFECTTRIGGERCOUNT_H
#define GAMEFIGHTEFFECTTRIGGERCOUNT_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightEffectTriggerCount : public DeserializeInterface {
public:
    unsigned int effectId = 0;
    double targetId = 0;
    unsigned int count = 0;

    void deserialize(CustomDataInput *input);

private:
    void _effectIdFunc(CustomDataInput *input);

    void _targetIdFunc(CustomDataInput *input);

    void _countFunc(CustomDataInput *input);
};

#endif