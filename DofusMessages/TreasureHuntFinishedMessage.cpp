#include "TreasureHuntFinishedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TreasureHuntFinishedMessage::deserialize(CustomDataInput *input) {
    this->_questTypeFunc(input);
}

void TreasureHuntFinishedMessage::_questTypeFunc(CustomDataInput *input) {
    this->questType = input->readByte();
    if (this->questType < 0) {

    }
}
