#include "EmoteAddMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void EmoteAddMessage::deserialize(CustomDataInput *input) {
    this->_emoteIdFunc(input);
}

void EmoteAddMessage::_emoteIdFunc(CustomDataInput *input) {
    this->emoteId = input->readUnsignedByte();
    if (this->emoteId < 0 || this->emoteId > 255) {

    }
}
