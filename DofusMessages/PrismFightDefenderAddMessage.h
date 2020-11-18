#ifndef PRISMFIGHTDEFENDERADDMESSAGE_H
#define PRISMFIGHTDEFENDERADDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/CharacterMinimalPlusLookInformations.h"

#include <string>
#include <vector>

class PrismFightDefenderAddMessage : public DeserializeInterface {
public:
    unsigned int subAreaId = 0;
    unsigned int fightId = 0;
    CharacterMinimalPlusLookInformations defender;

    void deserialize(CustomDataInput *input);

private:
    void _subAreaIdFunc(CustomDataInput *input);

    void _fightIdFunc(CustomDataInput *input);
};

#endif