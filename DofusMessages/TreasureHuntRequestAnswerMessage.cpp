#include "TreasureHuntRequestAnswerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TreasureHuntRequestAnswerMessage::deserialize(CustomDataInput *input) {
    this->_questTypeFunc(input);
    this->_resultFunc(input);
}

void TreasureHuntRequestAnswerMessage::_questTypeFunc(CustomDataInput *input) {
    this->questType = input->readByte();
    if (this->questType < 0) {

    }
}

void TreasureHuntRequestAnswerMessage::_resultFunc(CustomDataInput *input) {
    this->result = input->readByte();
    if (this->result < 0) {

    }
}
