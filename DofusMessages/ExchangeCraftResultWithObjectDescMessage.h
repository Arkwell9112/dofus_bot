#ifndef EXCHANGECRAFTRESULTWITHOBJECTDESCMESSAGE_H
#define EXCHANGECRAFTRESULTWITHOBJECTDESCMESSAGE_H

#include "ExchangeCraftResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItemNotInContainer.h"

#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ExchangeCraftResultWithObjectDescMessage : public ExchangeCraftResultMessage {
public:
    ObjectItemNotInContainer objectInfo;

    void deserialize(CustomDataInput *input);

private:
};

#endif