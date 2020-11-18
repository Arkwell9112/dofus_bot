#include "JobCrafterDirectoryAddMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void JobCrafterDirectoryAddMessage::deserialize(CustomDataInput *input) {
    this->listEntry.deserialize(input);
}