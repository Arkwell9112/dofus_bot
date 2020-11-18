#ifndef DUNGEONPARTYFINDERROOMCONTENTMESSAGE_H
#define DUNGEONPARTYFINDERROOMCONTENTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/DungeonPartyFinderPlayer.h"

#include <string>
#include <vector>

class DungeonPartyFinderRoomContentMessage : public DeserializeInterface {
public:
    unsigned int dungeonId = 0;
    std::vector<DungeonPartyFinderPlayer> players;

    void deserialize(CustomDataInput *input);

private:
    void _dungeonIdFunc(CustomDataInput *input);
};

#endif