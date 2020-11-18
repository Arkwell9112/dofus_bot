#include "PartyKickedByMessage.h"
#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyKickedByMessage::deserialize(CustomDataInput *input) {
    AbstractPartyMessage::deserialize(input);
    this->_kickerIdFunc(input);
}

void PartyKickedByMessage::_kickerIdFunc(CustomDataInput *input) {
    this->kickerId = input->readVarUhLong();
    if (this->kickerId < 0 || this->kickerId > 9007199254740990) {

    }
}
