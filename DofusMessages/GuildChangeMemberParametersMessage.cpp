#include "GuildChangeMemberParametersMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildChangeMemberParametersMessage::deserialize(CustomDataInput *input) {
    this->_memberIdFunc(input);
    this->_rankFunc(input);
    this->_experienceGivenPercentFunc(input);
    this->_rightsFunc(input);
}

void GuildChangeMemberParametersMessage::_memberIdFunc(CustomDataInput *input) {
    this->memberId = input->readVarUhLong();
    if (this->memberId < 0 || this->memberId > 9007199254740990) {

    }
}

void GuildChangeMemberParametersMessage::_rankFunc(CustomDataInput *input) {
    this->rank = input->readVarUhShort();
    if (this->rank < 0) {

    }
}

void GuildChangeMemberParametersMessage::_experienceGivenPercentFunc(CustomDataInput *input) {
    this->experienceGivenPercent = input->readByte();
    if (this->experienceGivenPercent < 0 || this->experienceGivenPercent > 100) {

    }
}

void GuildChangeMemberParametersMessage::_rightsFunc(CustomDataInput *input) {
    this->rights = input->readVarUhInt();
    if (this->rights < 0) {

    }
}
