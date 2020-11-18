#include "FriendSpouseInformations.h"
#include "EntityLook.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FriendSpouseInformations::deserialize(CustomDataInput *input) {
    this->_spouseAccountIdFunc(input);
    this->_spouseIdFunc(input);
    this->_spouseNameFunc(input);
    this->_spouseLevelFunc(input);
    this->_breedFunc(input);
    this->_sexFunc(input);
    this->spouseEntityLook.deserialize(input);
    this->guildInfo.deserialize(input);
    this->_alignmentSideFunc(input);
}

void FriendSpouseInformations::_spouseAccountIdFunc(CustomDataInput *input) {
    this->spouseAccountId = input->readInt();
    if (this->spouseAccountId < 0) {

    }
}

void FriendSpouseInformations::_spouseIdFunc(CustomDataInput *input) {
    this->spouseId = input->readVarUhLong();
    if (this->spouseId < 0 || this->spouseId > 9007199254740990) {

    }
}

void FriendSpouseInformations::_spouseNameFunc(CustomDataInput *input) {
    this->spouseName = input->readUTF();
}

void FriendSpouseInformations::_spouseLevelFunc(CustomDataInput *input) {
    this->spouseLevel = input->readVarUhShort();
    if (this->spouseLevel < 0) {

    }
}

void FriendSpouseInformations::_breedFunc(CustomDataInput *input) {
    this->breed = input->readByte();
}

void FriendSpouseInformations::_sexFunc(CustomDataInput *input) {
    this->sex = input->readByte();
}

void FriendSpouseInformations::_alignmentSideFunc(CustomDataInput *input) {
    this->alignmentSide = input->readByte();
}
