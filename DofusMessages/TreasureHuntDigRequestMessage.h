#ifndef TREASUREHUNTDIGREQUESTMESSAGE_H
#define TREASUREHUNTDIGREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TreasureHuntDigRequestMessage : public DeserializeInterface {
public:
    unsigned int questType = 0;

    void deserialize(CustomDataInput *input);

private:
    void _questTypeFunc(CustomDataInput *input);
};

#endif