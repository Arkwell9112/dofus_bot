#include "ExchangeBidHouseItemAddOkMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Item.h"

void ExchangeBidHouseItemAddOkMessage::deserialize(CustomDataInput *input) {
    this->itemInfo.deserialize(input);
}