#include "GuildModificationStartedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildModificationStartedMessage::deserialize(CustomDataInput *input) {
    this->deserializeByteBoxes(input);
}

void GuildModificationStartedMessage::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->canChangeName = BooleanByteWrapper::getFlag(_box0, 0);
    this->canChangeEmblem = BooleanByteWrapper::getFlag(_box0, 1);
}
