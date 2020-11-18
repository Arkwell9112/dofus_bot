#ifndef FIGHTERSTATSLISTMESSAGE_H
#define FIGHTERSTATSLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/CharacterCharacteristicsInformations.h"

#include <string>
#include <vector>

class FighterStatsListMessage : public DeserializeInterface {
public:
    CharacterCharacteristicsInformations stats;

    void deserialize(CustomDataInput *input);

private:
};

#endif