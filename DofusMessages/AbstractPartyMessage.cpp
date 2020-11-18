#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AbstractPartyMessage::deserialize(CustomDataInput *input) {
    this->_partyIdFunc(input);
}

void AbstractPartyMessage::_partyIdFunc(CustomDataInput *input) {
    this->partyId = input->readVarUhInt();
    if (this->partyId < 0) {

    }
}
