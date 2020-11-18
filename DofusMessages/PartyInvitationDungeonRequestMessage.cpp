#include "PartyInvitationRequestMessage.h"
#include "PartyInvitationDungeonRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyInvitationDungeonRequestMessage::deserialize(CustomDataInput *input) {
    PartyInvitationRequestMessage::deserialize(input);
    this->_dungeonIdFunc(input);
}

void PartyInvitationDungeonRequestMessage::_dungeonIdFunc(CustomDataInput *input) {
    this->dungeonId = input->readVarUhShort();
    if (this->dungeonId < 0) {

    }
}
