#ifndef BREACHSTATEMESSAGE_H
#define BREACHSTATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectEffectInteger.h"

#include "../DofusTypes/ObjectEffect.h"

#include "../DofusTypes/CharacterMinimalInformations.h"

#include <string>
#include <vector>

class BreachStateMessage : public DeserializeInterface {
public:
    CharacterMinimalInformations owner;
    std::vector<ObjectEffectInteger> bonuses;
    unsigned int bugdet = 0;
    bool saved = false;

    void deserialize(CustomDataInput *input);

private:
    void _bugdetFunc(CustomDataInput *input);

    void _savedFunc(CustomDataInput *input);
};

#endif