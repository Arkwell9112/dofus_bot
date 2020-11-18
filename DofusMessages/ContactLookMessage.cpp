#include "ContactLookMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ContactLookMessage::deserialize(CustomDataInput *input) {
    this->_requestIdFunc(input);
    this->_playerNameFunc(input);
    this->_playerIdFunc(input);
    this->look.deserialize(input);
}

void ContactLookMessage::_requestIdFunc(CustomDataInput *input) {
    this->requestId = input->readVarUhInt();
    if (this->requestId < 0) {

    }
}

void ContactLookMessage::_playerNameFunc(CustomDataInput *input) {
    this->playerName = input->readUTF();
}

void ContactLookMessage::_playerIdFunc(CustomDataInput *input) {
    this->playerId = input->readVarUhLong();
    if (this->playerId < 0 || this->playerId > 9007199254740990) {

    }
}
