#ifndef FIGHTENTITYDISPOSITIONINFORMATIONS_H
#define FIGHTENTITYDISPOSITIONINFORMATIONS_H

#include "EntityDispositionInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightEntityDispositionInformations : public EntityDispositionInformations {
public:
    double carryingCharacterId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _carryingCharacterIdFunc(CustomDataInput *input);
};

#endif