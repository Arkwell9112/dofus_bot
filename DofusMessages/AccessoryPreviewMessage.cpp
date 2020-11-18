#include "AccessoryPreviewMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AccessoryPreviewMessage::deserialize(CustomDataInput *input) {
    this->look.deserialize(input);
}