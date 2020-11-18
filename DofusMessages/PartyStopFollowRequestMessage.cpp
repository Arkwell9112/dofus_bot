#include "PartyStopFollowRequestMessage.h"
#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyStopFollowRequestMessage::deserialize(CustomDataInput *input) {
    AbstractPartyMessage::deserialize(input);
    this->_playerIdFunc(input);
}

void PartyStopFollowRequestMessage::_playerIdFunc(CustomDataInput *input) {
    this->playerId = input->readVarUhLong();
    if (this->playerId < 0 || this->playerId > 9007199254740990) {

    }
}
