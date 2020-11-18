#ifndef DUNGEONPARTYFINDERROOMCONTENTUPDATEMESSAGE_H
#define DUNGEONPARTYFINDERROOMCONTENTUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/DungeonPartyFinderPlayer.h"

#include <string>
#include <vector>

class DungeonPartyFinderRoomContentUpdateMessage : public DeserializeInterface {
public:
    unsigned int dungeonId = 0;
    std::vector<DungeonPartyFinderPlayer> addedPlayers;
    std::vector<double> removedPlayersIds;

    void deserialize(CustomDataInput *input);

private:
    void _dungeonIdFunc(CustomDataInput *input);

    void _removedPlayersIdsFunc(CustomDataInput *input);
};

#endif