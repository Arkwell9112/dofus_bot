#include "TreasureHuntGiveUpRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TreasureHuntGiveUpRequestMessage::deserialize(CustomDataInput *input) {
    this->_questTypeFunc(input);
}

void TreasureHuntGiveUpRequestMessage::_questTypeFunc(CustomDataInput *input) {
    this->questType = input->readByte();
    if (this->questType < 0) {

    }
}
