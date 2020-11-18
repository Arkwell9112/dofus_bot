#ifndef DUNGEONPARTYFINDERAVAILABLEDUNGEONSREQUESTMESSAGE_H
#define DUNGEONPARTYFINDERAVAILABLEDUNGEONSREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class DungeonPartyFinderAvailableDungeonsRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif