#include "MountEmoteIconUsedOkMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MountEmoteIconUsedOkMessage::deserialize(CustomDataInput *input) {
    this->_mountIdFunc(input);
    this->_reactionTypeFunc(input);
}

void MountEmoteIconUsedOkMessage::_mountIdFunc(CustomDataInput *input) {
    this->mountId = input->readVarInt();
}

void MountEmoteIconUsedOkMessage::_reactionTypeFunc(CustomDataInput *input) {
    this->reactionType = input->readByte();
    if (this->reactionType < 0) {

    }
}
