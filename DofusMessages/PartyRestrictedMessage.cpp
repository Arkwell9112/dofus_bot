#include "PartyRestrictedMessage.h"
#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyRestrictedMessage::deserialize(CustomDataInput *input) {
    AbstractPartyMessage::deserialize(input);
    this->_restrictedFunc(input);
}

void PartyRestrictedMessage::_restrictedFunc(CustomDataInput *input) {
    this->restricted = input->readBoolean();
}
