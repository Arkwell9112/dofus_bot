#include "PartyLeaderUpdateMessage.h"
#include "AbstractPartyEventMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyLeaderUpdateMessage::deserialize(CustomDataInput *input) {
    AbstractPartyEventMessage::deserialize(input);
    this->_partyLeaderIdFunc(input);
}

void PartyLeaderUpdateMessage::_partyLeaderIdFunc(CustomDataInput *input) {
    this->partyLeaderId = input->readVarUhLong();
    if (this->partyLeaderId < 0 || this->partyLeaderId > 9007199254740990) {

    }
}
