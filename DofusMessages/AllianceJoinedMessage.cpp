#include "AllianceJoinedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceJoinedMessage::deserialize(CustomDataInput *input) {
    this->allianceInfo.deserialize(input);
    this->_enabledFunc(input);
    this->_leadingGuildIdFunc(input);
}

void AllianceJoinedMessage::_enabledFunc(CustomDataInput *input) {
    this->enabled = input->readBoolean();
}

void AllianceJoinedMessage::_leadingGuildIdFunc(CustomDataInput *input) {
    this->leadingGuildId = input->readVarUhInt();
    if (this->leadingGuildId < 0) {

    }
}
