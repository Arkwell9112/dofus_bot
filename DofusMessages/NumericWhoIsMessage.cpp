#include "NumericWhoIsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void NumericWhoIsMessage::deserialize(CustomDataInput *input) {
    this->_playerIdFunc(input);
    this->_accountIdFunc(input);
}

void NumericWhoIsMessage::_playerIdFunc(CustomDataInput *input) {
    this->playerId = input->readVarUhLong();
    if (this->playerId < 0 || this->playerId > 9007199254740990) {

    }
}

void NumericWhoIsMessage::_accountIdFunc(CustomDataInput *input) {
    this->accountId = input->readInt();
    if (this->accountId < 0) {

    }
}
