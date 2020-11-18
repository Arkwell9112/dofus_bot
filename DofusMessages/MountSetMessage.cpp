#include "MountSetMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MountSetMessage::deserialize(CustomDataInput *input) {
    this->mountData.deserialize(input);
}