#ifndef TREASUREHUNTGIVEUPREQUESTMESSAGE_H
#define TREASUREHUNTGIVEUPREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TreasureHuntGiveUpRequestMessage : public DeserializeInterface {
public:
    unsigned int questType = 0;

    void deserialize(CustomDataInput *input);

private:
    void _questTypeFunc(CustomDataInput *input);
};

#endif