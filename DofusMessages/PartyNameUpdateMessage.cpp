#include "PartyNameUpdateMessage.h"
#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyNameUpdateMessage::deserialize(CustomDataInput *input) {
    AbstractPartyMessage::deserialize(input);
    this->_partyNameFunc(input);
}

void PartyNameUpdateMessage::_partyNameFunc(CustomDataInput *input) {
    this->partyName = input->readUTF();
}
