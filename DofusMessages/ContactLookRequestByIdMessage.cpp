#include "ContactLookRequestMessage.h"
#include "ContactLookRequestByIdMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ContactLookRequestByIdMessage::deserialize(CustomDataInput *input) {
    ContactLookRequestMessage::deserialize(input);
    this->_playerIdFunc(input);
}

void ContactLookRequestByIdMessage::_playerIdFunc(CustomDataInput *input) {
    this->playerId = input->readVarUhLong();
    if (this->playerId < 0 || this->playerId > 9007199254740990) {

    }
}
