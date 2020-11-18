#include "AllianceGuildLeavingMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceGuildLeavingMessage::deserialize(CustomDataInput *input) {
    this->_kickedFunc(input);
    this->_guildIdFunc(input);
}

void AllianceGuildLeavingMessage::_kickedFunc(CustomDataInput *input) {
    this->kicked = input->readBoolean();
}

void AllianceGuildLeavingMessage::_guildIdFunc(CustomDataInput *input) {
    this->guildId = input->readVarUhInt();
    if (this->guildId < 0) {

    }
}
