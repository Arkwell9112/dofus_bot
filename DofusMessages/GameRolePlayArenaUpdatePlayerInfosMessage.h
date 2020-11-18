#ifndef GAMEROLEPLAYARENAUPDATEPLAYERINFOSMESSAGE_H
#define GAMEROLEPLAYARENAUPDATEPLAYERINFOSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ArenaRankInfos.h"

#include <string>
#include <vector>

class GameRolePlayArenaUpdatePlayerInfosMessage : public DeserializeInterface {
public:
    ArenaRankInfos solo;

    void deserialize(CustomDataInput *input);

private:
};

#endif