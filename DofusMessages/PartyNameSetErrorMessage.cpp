#include "PartyNameSetErrorMessage.h"
#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyNameSetErrorMessage::deserialize(CustomDataInput *input) {
    AbstractPartyMessage::deserialize(input);
    this->_resultFunc(input);
}

void PartyNameSetErrorMessage::_resultFunc(CustomDataInput *input) {
    this->result = input->readByte();
    if (this->result < 0) {

    }
}
