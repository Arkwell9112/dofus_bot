#ifndef GAMEROLEPLAYARENAUPDATEPLAYERINFOSALLQUEUESMESSAGE_H
#define GAMEROLEPLAYARENAUPDATEPLAYERINFOSALLQUEUESMESSAGE_H

#include "GameRolePlayArenaUpdatePlayerInfosMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ArenaRankInfos.h"

#include <string>
#include <vector>

class GameRolePlayArenaUpdatePlayerInfosAllQueuesMessage : public GameRolePlayArenaUpdatePlayerInfosMessage {
public:
    ArenaRankInfos team;
    ArenaRankInfos duel;

    void deserialize(CustomDataInput *input);

private:
};

#endif