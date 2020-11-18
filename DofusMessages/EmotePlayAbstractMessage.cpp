#include "EmotePlayAbstractMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void EmotePlayAbstractMessage::deserialize(CustomDataInput *input) {
    this->_emoteIdFunc(input);
    this->_emoteStartTimeFunc(input);
}

void EmotePlayAbstractMessage::_emoteIdFunc(CustomDataInput *input) {
    this->emoteId = input->readUnsignedByte();
    if (this->emoteId < 0 || this->emoteId > 255) {

    }
}

void EmotePlayAbstractMessage::_emoteStartTimeFunc(CustomDataInput *input) {
    this->emoteStartTime = input->readDouble();
    if (this->emoteStartTime < -9007199254740990 || this->emoteStartTime > 9007199254740990) {

    }
}
