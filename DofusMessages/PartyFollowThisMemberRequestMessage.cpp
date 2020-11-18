#include "PartyFollowThisMemberRequestMessage.h"
#include "PartyFollowMemberRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyFollowThisMemberRequestMessage::deserialize(CustomDataInput *input) {
    PartyFollowMemberRequestMessage::deserialize(input);
    this->_enabledFunc(input);
}

void PartyFollowThisMemberRequestMessage::_enabledFunc(CustomDataInput *input) {
    this->enabled = input->readBoolean();
}
