#include "PartyMemberRemoveMessage.h"
#include "AbstractPartyEventMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyMemberRemoveMessage::deserialize(CustomDataInput *input) {
    AbstractPartyEventMessage::deserialize(input);
    this->_leavingPlayerIdFunc(input);
}

void PartyMemberRemoveMessage::_leavingPlayerIdFunc(CustomDataInput *input) {
    this->leavingPlayerId = input->readVarUhLong();
    if (this->leavingPlayerId < 0 || this->leavingPlayerId > 9007199254740990) {

    }
}
