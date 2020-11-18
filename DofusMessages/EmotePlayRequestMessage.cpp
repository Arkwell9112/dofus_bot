#include "EmotePlayRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void EmotePlayRequestMessage::deserialize(CustomDataInput *input) {
    this->_emoteIdFunc(input);
}

void EmotePlayRequestMessage::_emoteIdFunc(CustomDataInput *input) {
    this->emoteId = input->readUnsignedByte();
    if (this->emoteId < 0 || this->emoteId > 255) {

    }
}
