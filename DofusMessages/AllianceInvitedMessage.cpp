#include "AllianceInvitedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceInvitedMessage::deserialize(CustomDataInput *input) {
    this->_recruterIdFunc(input);
    this->_recruterNameFunc(input);
    this->allianceInfo.deserialize(input);
}

void AllianceInvitedMessage::_recruterIdFunc(CustomDataInput *input) {
    this->recruterId = input->readVarUhLong();
    if (this->recruterId < 0 || this->recruterId > 9007199254740990) {

    }
}

void AllianceInvitedMessage::_recruterNameFunc(CustomDataInput *input) {
    this->recruterName = input->readUTF();
}
