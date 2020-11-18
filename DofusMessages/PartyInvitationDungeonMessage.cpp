#include "PartyInvitationMessage.h"
#include "PartyInvitationDungeonMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyInvitationDungeonMessage::deserialize(CustomDataInput *input) {
    PartyInvitationMessage::deserialize(input);
    this->_dungeonIdFunc(input);
}

void PartyInvitationDungeonMessage::_dungeonIdFunc(CustomDataInput *input) {
    this->dungeonId = input->readVarUhShort();
    if (this->dungeonId < 0) {

    }
}
