#include "ExchangeBidHouseInListUpdatedMessage.h"
#include "ExchangeBidHouseInListAddedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeBidHouseInListUpdatedMessage::deserialize(CustomDataInput *input) {
    ExchangeBidHouseInListAddedMessage::deserialize(input);
}