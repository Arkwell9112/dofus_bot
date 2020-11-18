#ifndef DUNGEONPARTYFINDERREGISTERREQUESTMESSAGE_H
#define DUNGEONPARTYFINDERREGISTERREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class DungeonPartyFinderRegisterRequestMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> dungeonIds;

    void deserialize(CustomDataInput *input);

private:
    void _dungeonIdsFunc(CustomDataInput *input);
};

#endif