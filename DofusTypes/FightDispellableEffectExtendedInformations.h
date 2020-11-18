#ifndef FIGHTDISPELLABLEEFFECTEXTENDEDINFORMATIONS_H
#define FIGHTDISPELLABLEEFFECTEXTENDEDINFORMATIONS_H

#include "AbstractFightDispellableEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightDispellableEffectExtendedInformations : public DeserializeInterface {
public:
    unsigned int actionId = 0;
    double sourceId = 0;
    AbstractFightDispellableEffect effect;

    void deserialize(CustomDataInput *input);

private:
    void _actionIdFunc(CustomDataInput *input);

    void _sourceIdFunc(CustomDataInput *input);
};

#endif