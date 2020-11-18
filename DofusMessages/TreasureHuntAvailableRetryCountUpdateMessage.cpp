#include "TreasureHuntAvailableRetryCountUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TreasureHuntAvailableRetryCountUpdateMessage::deserialize(CustomDataInput *input) {
    this->_questTypeFunc(input);
    this->_availableRetryCountFunc(input);
}

void TreasureHuntAvailableRetryCountUpdateMessage::_questTypeFunc(CustomDataInput *input) {
    this->questType = input->readByte();
    if (this->questType < 0) {

    }
}

void TreasureHuntAvailableRetryCountUpdateMessage::_availableRetryCountFunc(CustomDataInput *input) {
    this->availableRetryCount = input->readInt();
}
