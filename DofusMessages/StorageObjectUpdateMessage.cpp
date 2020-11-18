#include "StorageObjectUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void StorageObjectUpdateMessage::deserialize(CustomDataInput *input) {
    this->object.deserialize(input);
}