#ifndef GUILDFIGHTPLAYERSENEMIESLISTMESSAGE_H
#define GUILDFIGHTPLAYERSENEMIESLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/CharacterMinimalPlusLookInformations.h"

#include <string>
#include <vector>

class GuildFightPlayersEnemiesListMessage : public DeserializeInterface {
public:
    double fightId = 0;
    std::vector<CharacterMinimalPlusLookInformations> playerInfo;

    void deserialize(CustomDataInput *input);

private:
    void _fightIdFunc(CustomDataInput *input);
};

#endif