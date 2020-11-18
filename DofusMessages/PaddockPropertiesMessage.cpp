#include "PaddockPropertiesMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PaddockPropertiesMessage::deserialize(CustomDataInput *input) {
    this->properties.deserialize(input);
}