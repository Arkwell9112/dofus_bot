#include "MoodSmileyResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MoodSmileyResultMessage::deserialize(CustomDataInput *input) {
    this->_resultCodeFunc(input);
    this->_smileyIdFunc(input);
}

void MoodSmileyResultMessage::_resultCodeFunc(CustomDataInput *input) {
    this->resultCode = input->readByte();
    if (this->resultCode < 0) {

    }
}

void MoodSmileyResultMessage::_smileyIdFunc(CustomDataInput *input) {
    this->smileyId = input->readVarUhShort();
    if (this->smileyId < 0) {

    }
}
