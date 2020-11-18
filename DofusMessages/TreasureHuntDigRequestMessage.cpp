#include "TreasureHuntDigRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TreasureHuntDigRequestMessage::deserialize(CustomDataInput *input) {
    this->_questTypeFunc(input);
}

void TreasureHuntDigRequestMessage::_questTypeFunc(CustomDataInput *input) {
    this->questType = input->readByte();
    if (this->questType < 0) {

    }
}
