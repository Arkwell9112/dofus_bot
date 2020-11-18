#ifndef GUILDFIGHTPLAYERSHELPERSJOINMESSAGE_H
#define GUILDFIGHTPLAYERSHELPERSJOINMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/CharacterMinimalPlusLookInformations.h"

#include <string>
#include <vector>

class GuildFightPlayersHelpersJoinMessage : public DeserializeInterface {
public:
    double fightId = 0;
    CharacterMinimalPlusLookInformations playerInfo;

    void deserialize(CustomDataInput *input);

private:
    void _fightIdFunc(CustomDataInput *input);
};

#endif