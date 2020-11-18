#include "NumericWhoIsRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void NumericWhoIsRequestMessage::deserialize(CustomDataInput *input) {
    this->_playerIdFunc(input);
}

void NumericWhoIsRequestMessage::_playerIdFunc(CustomDataInput *input) {
    this->playerId = input->readVarUhLong();
    if (this->playerId < 0 || this->playerId > 9007199254740990) {

    }
}
