#include "GuildInsiderFactSheetInformations.h"
#include "GuildFactSheetInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildInsiderFactSheetInformations::deserialize(CustomDataInput *input) {
    GuildFactSheetInformations::deserialize(input);
    this->_leaderNameFunc(input);
    this->_nbConnectedMembersFunc(input);
    this->_nbTaxCollectorsFunc(input);
    this->_lastActivityFunc(input);
}

void GuildInsiderFactSheetInformations::_leaderNameFunc(CustomDataInput *input) {
    this->leaderName = input->readUTF();
}

void GuildInsiderFactSheetInformations::_nbConnectedMembersFunc(CustomDataInput *input) {
    this->nbConnectedMembers = input->readVarUhShort();
    if (this->nbConnectedMembers < 0) {

    }
}

void GuildInsiderFactSheetInformations::_nbTaxCollectorsFunc(CustomDataInput *input) {
    this->nbTaxCollectors = input->readByte();
    if (this->nbTaxCollectors < 0) {

    }
}

void GuildInsiderFactSheetInformations::_lastActivityFunc(CustomDataInput *input) {
    this->lastActivity = input->readInt();
    if (this->lastActivity < 0) {

    }
}
