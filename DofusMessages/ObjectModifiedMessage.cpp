#include "ObjectModifiedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectModifiedMessage::deserialize(CustomDataInput *input) {
    this->object.deserialize(input);
}