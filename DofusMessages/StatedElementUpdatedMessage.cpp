#include "StatedElementUpdatedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/StatedElement.h"

void StatedElementUpdatedMessage::deserialize(CustomDataInput *input) {
    this->statedElement.deserialize(input);
}