#ifndef DUNGEONPARTYFINDERREGISTERSUCCESSMESSAGE_H
#define DUNGEONPARTYFINDERREGISTERSUCCESSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class DungeonPartyFinderRegisterSuccessMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> dungeonIds;

    void deserialize(CustomDataInput *input);

private:
    void _dungeonIdsFunc(CustomDataInput *input);
};

#endif