#include "AllianceChangeGuildRightsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceChangeGuildRightsMessage::deserialize(CustomDataInput *input) {
    this->_guildIdFunc(input);
    this->_rightsFunc(input);
}

void AllianceChangeGuildRightsMessage::_guildIdFunc(CustomDataInput *input) {
    this->guildId = input->readVarUhInt();
    if (this->guildId < 0) {

    }
}

void AllianceChangeGuildRightsMessage::_rightsFunc(CustomDataInput *input) {
    this->rights = input->readByte();
    if (this->rights < 0) {

    }
}
