#include "MoodSmileyRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MoodSmileyRequestMessage::deserialize(CustomDataInput *input) {
    this->_smileyIdFunc(input);
}

void MoodSmileyRequestMessage::_smileyIdFunc(CustomDataInput *input) {
    this->smileyId = input->readVarUhShort();
    if (this->smileyId < 0) {

    }
}
