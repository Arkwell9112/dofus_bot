#include "BreachBonusMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BreachBonusMessage::deserialize(CustomDataInput *input) {
    this->bonus.deserialize(input);
}