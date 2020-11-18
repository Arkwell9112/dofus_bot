#include "TreasureHuntFlagRemoveRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/TreasureHuntFlag.h"

void TreasureHuntFlagRemoveRequestMessage::deserialize(CustomDataInput *input) {
    this->_questTypeFunc(input);
    this->_indexFunc(input);
}

void TreasureHuntFlagRemoveRequestMessage::_questTypeFunc(CustomDataInput *input) {
    this->questType = input->readByte();
    if (this->questType < 0) {

    }
}

void TreasureHuntFlagRemoveRequestMessage::_indexFunc(CustomDataInput *input) {
    this->index = input->readByte();
    if (this->index < 0) {

    }
}
