#include "PartyInvitationRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyInvitationRequestMessage::deserialize(CustomDataInput *input) {
    this->_nameFunc(input);
}

void PartyInvitationRequestMessage::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}
