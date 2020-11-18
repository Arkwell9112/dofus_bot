#include "ExchangeCraftResultWithObjectDescMessage.h"
#include "ExchangeCraftResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeCraftResultWithObjectDescMessage::deserialize(CustomDataInput *input) {
    ExchangeCraftResultMessage::deserialize(input);
    this->objectInfo.deserialize(input);
}