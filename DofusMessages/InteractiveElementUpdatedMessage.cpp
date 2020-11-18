#include "InteractiveElementUpdatedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/InteractiveElement.h"

void InteractiveElementUpdatedMessage::deserialize(CustomDataInput *input) {
    this->interactiveElement.deserialize(input);
}