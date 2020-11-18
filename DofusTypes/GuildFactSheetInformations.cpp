#include "GuildInformations.h"
#include "GuildFactSheetInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildFactSheetInformations::deserialize(CustomDataInput *input) {
    GuildInformations::deserialize(input);
    this->_leaderIdFunc(input);
    this->_nbMembersFunc(input);
}

void GuildFactSheetInformations::_leaderIdFunc(CustomDataInput *input) {
    this->leaderId = input->readVarUhLong();
    if (this->leaderId < 0 || this->leaderId > 9007199254740990) {

    }
}

void GuildFactSheetInformations::_nbMembersFunc(CustomDataInput *input) {
    this->nbMembers = input->readVarUhShort();
    if (this->nbMembers < 0) {

    }
}
