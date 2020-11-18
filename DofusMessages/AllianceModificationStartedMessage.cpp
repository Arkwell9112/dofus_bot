#include "AllianceModificationStartedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceModificationStartedMessage::deserialize(CustomDataInput *input) {
    this->deserializeByteBoxes(input);
}

void AllianceModificationStartedMessage::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->canChangeName = BooleanByteWrapper::getFlag(_box0, 0);
    this->canChangeTag = BooleanByteWrapper::getFlag(_box0, 1);
    this->canChangeEmblem = BooleanByteWrapper::getFlag(_box0, 2);
}
