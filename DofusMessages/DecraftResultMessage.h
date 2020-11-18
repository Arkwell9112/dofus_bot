#ifndef DECRAFTRESULTMESSAGE_H
#define DECRAFTRESULTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Item.h"

#include "../DofusTypes/DecraftedItemStackInfo.h"

#include <string>
#include <vector>

class DecraftResultMessage : public DeserializeInterface {
public:
    std::vector<DecraftedItemStackInfo> results;

    void deserialize(CustomDataInput *input);

private:
};

#endif