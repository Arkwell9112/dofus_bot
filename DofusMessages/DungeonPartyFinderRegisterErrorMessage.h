#ifndef DUNGEONPARTYFINDERREGISTERERRORMESSAGE_H
#define DUNGEONPARTYFINDERREGISTERERRORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class DungeonPartyFinderRegisterErrorMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif