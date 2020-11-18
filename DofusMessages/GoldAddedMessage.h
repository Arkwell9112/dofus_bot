#ifndef GOLDADDEDMESSAGE_H
#define GOLDADDEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Item.h"

#include "../DofusTypes/GoldItem.h"

#include <string>
#include <vector>

class GoldAddedMessage : public DeserializeInterface {
public:
    GoldItem gold;

    void deserialize(CustomDataInput *input);

private:
};

#endif