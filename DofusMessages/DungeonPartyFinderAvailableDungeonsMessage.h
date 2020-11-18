#ifndef DUNGEONPARTYFINDERAVAILABLEDUNGEONSMESSAGE_H
#define DUNGEONPARTYFINDERAVAILABLEDUNGEONSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class DungeonPartyFinderAvailableDungeonsMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> dungeonIds;

    void deserialize(CustomDataInput *input);

private:
    void _dungeonIdsFunc(CustomDataInput *input);
};

#endif