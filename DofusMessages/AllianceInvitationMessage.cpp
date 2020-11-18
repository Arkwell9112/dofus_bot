#include "AllianceInvitationMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceInvitationMessage::deserialize(CustomDataInput *input) {
    this->_targetIdFunc(input);
}

void AllianceInvitationMessage::_targetIdFunc(CustomDataInput *input) {
    this->targetId = input->readVarUhLong();
    if (this->targetId < 0 || this->targetId > 9007199254740990) {

    }
}
