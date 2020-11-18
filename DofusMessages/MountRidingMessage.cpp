#include "MountRidingMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MountRidingMessage::deserialize(CustomDataInput *input) {
    this->deserializeByteBoxes(input);
}

void MountRidingMessage::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->isRiding = BooleanByteWrapper::getFlag(_box0, 0);
    this->isAutopilot = BooleanByteWrapper::getFlag(_box0, 1);
}
