#include "GuildInformationsGeneralMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildInformations.h"

void GuildInformationsGeneralMessage::deserialize(CustomDataInput *input) {
    this->_abandonnedPaddockFunc(input);
    this->_levelFunc(input);
    this->_expLevelFloorFunc(input);
    this->_experienceFunc(input);
    this->_expNextLevelFloorFunc(input);
    this->_creationDateFunc(input);
    this->_nbTotalMembersFunc(input);
    this->_nbConnectedMembersFunc(input);
}

void GuildInformationsGeneralMessage::_abandonnedPaddockFunc(CustomDataInput *input) {
    this->abandonnedPaddock = input->readBoolean();
}

void GuildInformationsGeneralMessage::_levelFunc(CustomDataInput *input) {
    this->level = input->readUnsignedByte();
    if (this->level < 0 || this->level > 255) {

    }
}

void GuildInformationsGeneralMessage::_expLevelFloorFunc(CustomDataInput *input) {
    this->expLevelFloor = input->readVarUhLong();
    if (this->expLevelFloor < 0 || this->expLevelFloor > 9007199254740990) {

    }
}

void GuildInformationsGeneralMessage::_experienceFunc(CustomDataInput *input) {
    this->experience = input->readVarUhLong();
    if (this->experience < 0 || this->experience > 9007199254740990) {

    }
}

void GuildInformationsGeneralMessage::_expNextLevelFloorFunc(CustomDataInput *input) {
    this->expNextLevelFloor = input->readVarUhLong();
    if (this->expNextLevelFloor < 0 || this->expNextLevelFloor > 9007199254740990) {

    }
}

void GuildInformationsGeneralMessage::_creationDateFunc(CustomDataInput *input) {
    this->creationDate = input->readInt();
    if (this->creationDate < 0) {

    }
}

void GuildInformationsGeneralMessage::_nbTotalMembersFunc(CustomDataInput *input) {
    this->nbTotalMembers = input->readVarUhShort();
    if (this->nbTotalMembers < 0) {

    }
}

void GuildInformationsGeneralMessage::_nbConnectedMembersFunc(CustomDataInput *input) {
    this->nbConnectedMembers = input->readVarUhShort();
    if (this->nbConnectedMembers < 0) {

    }
}
