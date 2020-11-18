#include "PartyNameSetRequestMessage.h"
#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyNameSetRequestMessage::deserialize(CustomDataInput *input) {
    AbstractPartyMessage::deserialize(input);
    this->_partyNameFunc(input);
}

void PartyNameSetRequestMessage::_partyNameFunc(CustomDataInput *input) {
    this->partyName = input->readUTF();
}
