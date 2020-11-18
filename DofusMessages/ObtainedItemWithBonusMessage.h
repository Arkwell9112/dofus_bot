#ifndef OBTAINEDITEMWITHBONUSMESSAGE_H
#define OBTAINEDITEMWITHBONUSMESSAGE_H

#include "ObtainedItemMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ObtainedItemWithBonusMessage : public ObtainedItemMessage {
public:
    unsigned int bonusQuantity = 0;

    void deserialize(CustomDataInput *input);

private:
    void _bonusQuantityFunc(CustomDataInput *input);
};

#endif