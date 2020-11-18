#include "TreasureHuntFlagRequestAnswerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/TreasureHuntFlag.h"

void TreasureHuntFlagRequestAnswerMessage::deserialize(CustomDataInput *input) {
    this->_questTypeFunc(input);
    this->_resultFunc(input);
    this->_indexFunc(input);
}

void TreasureHuntFlagRequestAnswerMessage::_questTypeFunc(CustomDataInput *input) {
    this->questType = input->readByte();
    if (this->questType < 0) {

    }
}

void TreasureHuntFlagRequestAnswerMessage::_resultFunc(CustomDataInput *input) {
    this->result = input->readByte();
    if (this->result < 0) {

    }
}

void TreasureHuntFlagRequestAnswerMessage::_indexFunc(CustomDataInput *input) {
    this->index = input->readByte();
    if (this->index < 0) {

    }
}
