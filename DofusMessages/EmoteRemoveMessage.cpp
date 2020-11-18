#include "EmoteRemoveMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void EmoteRemoveMessage::deserialize(CustomDataInput *input) {
    this->_emoteIdFunc(input);
}

void EmoteRemoveMessage::_emoteIdFunc(CustomDataInput *input) {
    this->emoteId = input->readUnsignedByte();
    if (this->emoteId < 0 || this->emoteId > 255) {

    }
}
