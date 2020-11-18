#include "GuildInformations.h"
#include "GuildInAllianceInformations.h"
#include "AllianceInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildInAllianceInformations::deserialize(CustomDataInput *input) {
    GuildInformations::deserialize(input);
    this->_nbMembersFunc(input);
    this->_joinDateFunc(input);
}

void GuildInAllianceInformations::_nbMembersFunc(CustomDataInput *input) {
    this->nbMembers = input->readUnsignedByte();
    if (this->nbMembers < 1 || this->nbMembers > 240) {

    }
}

void GuildInAllianceInformations::_joinDateFunc(CustomDataInput *input) {
    this->joinDate = input->readInt();
    if (this->joinDate < 0) {

    }
}
