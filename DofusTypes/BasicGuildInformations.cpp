#include "GuildInformations.h"
#include "BasicGuildInformations.h"
#include "AbstractSocialGroupInfos.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BasicGuildInformations::deserialize(CustomDataInput *input) {
    AbstractSocialGroupInfos::deserialize(input);
    this->_guildIdFunc(input);
    this->_guildNameFunc(input);
    this->_guildLevelFunc(input);
}

void BasicGuildInformations::_guildIdFunc(CustomDataInput *input) {
    this->guildId = input->readVarUhInt();
    if (this->guildId < 0) {

    }
}

void BasicGuildInformations::_guildNameFunc(CustomDataInput *input) {
    this->guildName = input->readUTF();
}

void BasicGuildInformations::_guildLevelFunc(CustomDataInput *input) {
    this->guildLevel = input->readUnsignedByte();
    if (this->guildLevel < 0 || this->guildLevel > 200) {

    }
}
