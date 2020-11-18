#include "PartyKickRequestMessage.h"
#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyKickRequestMessage::deserialize(CustomDataInput *input) {
    AbstractPartyMessage::deserialize(input);
    this->_playerIdFunc(input);
}

void PartyKickRequestMessage::_playerIdFunc(CustomDataInput *input) {
    this->playerId = input->readVarUhLong();
    if (this->playerId < 0 || this->playerId > 9007199254740990) {

    }
}
