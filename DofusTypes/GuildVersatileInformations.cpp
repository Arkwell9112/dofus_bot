#include "GuildVersatileInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildVersatileInformations::deserialize(CustomDataInput *input) {
    this->_guildIdFunc(input);
    this->_leaderIdFunc(input);
    this->_guildLevelFunc(input);
    this->_nbMembersFunc(input);
}

void GuildVersatileInformations::_guildIdFunc(CustomDataInput *input) {
    this->guildId = input->readVarUhInt();
    if (this->guildId < 0) {

    }
}

void GuildVersatileInformations::_leaderIdFunc(CustomDataInput *input) {
    this->leaderId = input->readVarUhLong();
    if (this->leaderId < 0 || this->leaderId > 9007199254740990) {

    }
}

void GuildVersatileInformations::_guildLevelFunc(CustomDataInput *input) {
    this->guildLevel = input->readUnsignedByte();
    if (this->guildLevel < 1 || this->guildLevel > 200) {

    }
}

void GuildVersatileInformations::_nbMembersFunc(CustomDataInput *input) {
    this->nbMembers = input->readUnsignedByte();
    if (this->nbMembers < 1 || this->nbMembers > 240) {

    }
}
