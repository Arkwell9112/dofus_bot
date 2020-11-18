#ifndef BREACHBONUSMESSAGE_H
#define BREACHBONUSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectEffectInteger.h"

#include "../DofusTypes/ObjectEffect.h"

#include <string>
#include <vector>

class BreachBonusMessage : public DeserializeInterface {
public:
    ObjectEffectInteger bonus;

    void deserialize(CustomDataInput *input);

private:
};

#endif