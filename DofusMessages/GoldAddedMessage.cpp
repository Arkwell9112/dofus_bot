#include "GoldAddedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GoldAddedMessage::deserialize(CustomDataInput *input) {
    this->gold.deserialize(input);
}