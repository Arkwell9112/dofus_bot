#include "TreasureHuntDigRequestAnswerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TreasureHuntDigRequestAnswerMessage::deserialize(CustomDataInput *input) {
    this->_questTypeFunc(input);
    this->_resultFunc(input);
}

void TreasureHuntDigRequestAnswerMessage::_questTypeFunc(CustomDataInput *input) {
    this->questType = input->readByte();
    if (this->questType < 0) {

    }
}

void TreasureHuntDigRequestAnswerMessage::_resultFunc(CustomDataInput *input) {
    this->result = input->readByte();
    if (this->result < 0) {

    }
}
