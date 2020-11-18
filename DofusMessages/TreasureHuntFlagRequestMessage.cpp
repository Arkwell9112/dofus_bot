#include "TreasureHuntFlagRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/TreasureHuntFlag.h"

void TreasureHuntFlagRequestMessage::deserialize(CustomDataInput *input) {
    this->_questTypeFunc(input);
    this->_indexFunc(input);
}

void TreasureHuntFlagRequestMessage::_questTypeFunc(CustomDataInput *input) {
    this->questType = input->readByte();
    if (this->questType < 0) {

    }
}

void TreasureHuntFlagRequestMessage::_indexFunc(CustomDataInput *input) {
    this->index = input->readByte();
    if (this->index < 0) {

    }
}
