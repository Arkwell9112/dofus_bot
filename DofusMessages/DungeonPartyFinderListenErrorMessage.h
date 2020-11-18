#ifndef DUNGEONPARTYFINDERLISTENERRORMESSAGE_H
#define DUNGEONPARTYFINDERLISTENERRORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class DungeonPartyFinderListenErrorMessage : public DeserializeInterface {
public:
    unsigned int dungeonId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _dungeonIdFunc(CustomDataInput *input);
};

#endif