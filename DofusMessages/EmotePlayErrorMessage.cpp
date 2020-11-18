#include "EmotePlayErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void EmotePlayErrorMessage::deserialize(CustomDataInput *input) {
    this->_emoteIdFunc(input);
}

void EmotePlayErrorMessage::_emoteIdFunc(CustomDataInput *input) {
    this->emoteId = input->readUnsignedByte();
    if (this->emoteId < 0 || this->emoteId > 255) {

    }
}
