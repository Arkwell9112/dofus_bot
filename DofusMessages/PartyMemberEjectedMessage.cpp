#include "PartyMemberRemoveMessage.h"
#include "PartyMemberEjectedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyMemberEjectedMessage::deserialize(CustomDataInput *input) {
    PartyMemberRemoveMessage::deserialize(input);
    this->_kickerIdFunc(input);
}

void PartyMemberEjectedMessage::_kickerIdFunc(CustomDataInput *input) {
    this->kickerId = input->readVarUhLong();
    if (this->kickerId < 0 || this->kickerId > 9007199254740990) {

    }
}
