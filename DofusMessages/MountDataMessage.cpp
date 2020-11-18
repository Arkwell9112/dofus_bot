#include "MountDataMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MountDataMessage::deserialize(CustomDataInput *input) {
    this->mountData.deserialize(input);
}