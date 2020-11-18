#ifndef CHARACTERSTATSLISTMESSAGE_H
#define CHARACTERSTATSLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/CharacterCharacteristicsInformations.h"

#include <string>
#include <vector>

class CharacterStatsListMessage : public DeserializeInterface {
public:
    CharacterCharacteristicsInformations stats;

    void deserialize(CustomDataInput *input);

private:
};

#endif