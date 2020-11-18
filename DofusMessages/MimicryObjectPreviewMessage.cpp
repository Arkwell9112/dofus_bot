#include "MimicryObjectPreviewMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MimicryObjectPreviewMessage::deserialize(CustomDataInput *input) {
    this->result.deserialize(input);
}