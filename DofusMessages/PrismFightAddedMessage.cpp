#include "PrismFightAddedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PrismFightAddedMessage::deserialize(CustomDataInput *input) {
    this->fight.deserialize(input);
}