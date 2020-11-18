#ifndef PRISMFIGHTATTACKERADDMESSAGE_H
#define PRISMFIGHTATTACKERADDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/CharacterMinimalPlusLookInformations.h"

#include <string>
#include <vector>

class PrismFightAttackerAddMessage : public DeserializeInterface {
public:
    unsigned int subAreaId = 0;
    unsigned int fightId = 0;
    CharacterMinimalPlusLookInformations attacker;

    void deserialize(CustomDataInput *input);

private:
    void _subAreaIdFunc(CustomDataInput *input);

    void _fightIdFunc(CustomDataInput *input);
};

#endif