#include "CompassUpdatePartyMemberMessage.h"
#include "CompassUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CompassUpdatePartyMemberMessage::deserialize(CustomDataInput *input) {
    CompassUpdateMessage::deserialize(input);
    this->_memberIdFunc(input);
    this->_activeFunc(input);
}

void CompassUpdatePartyMemberMessage::_memberIdFunc(CustomDataInput *input) {
    this->memberId = input->readVarUhLong();
    if (this->memberId < 0 || this->memberId > 9007199254740990) {

    }
}

void CompassUpdatePartyMemberMessage::_activeFunc(CustomDataInput *input) {
    this->active = input->readBoolean();
}
