#include "PlayerStatus.h"
#include "GuildMember.h"
#include "CharacterMinimalInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildMember::deserialize(CustomDataInput *input) {
    CharacterMinimalInformations::deserialize(input);
    this->deserializeByteBoxes(input);
    this->_breedFunc(input);
    this->_rankFunc(input);
    this->_givenExperienceFunc(input);
    this->_experienceGivenPercentFunc(input);
    this->_rightsFunc(input);
    this->_connectedFunc(input);
    this->_alignmentSideFunc(input);
    this->_hoursSinceLastConnectionFunc(input);
    this->_moodSmileyIdFunc(input);
    this->_accountIdFunc(input);
    this->_achievementPointsFunc(input);
    unsigned int _id13 = input->readUnsignedShort();
    this->status = *dynamic_cast<PlayerStatus *>(ProtocolTypeManager::getInstance(_id13, input));
    ProtocolTypeManager::deleteLastInstance();

}

void GuildMember::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->sex = BooleanByteWrapper::getFlag(_box0, 0);
    this->havenBagShared = BooleanByteWrapper::getFlag(_box0, 1);
}

void GuildMember::_breedFunc(CustomDataInput *input) {
    this->breed = input->readByte();
}

void GuildMember::_rankFunc(CustomDataInput *input) {
    this->rank = input->readVarUhShort();
    if (this->rank < 0) {

    }
}

void GuildMember::_givenExperienceFunc(CustomDataInput *input) {
    this->givenExperience = input->readVarUhLong();
    if (this->givenExperience < 0 || this->givenExperience > 9007199254740990) {

    }
}

void GuildMember::_experienceGivenPercentFunc(CustomDataInput *input) {
    this->experienceGivenPercent = input->readByte();
    if (this->experienceGivenPercent < 0 || this->experienceGivenPercent > 100) {

    }
}

void GuildMember::_rightsFunc(CustomDataInput *input) {
    this->rights = input->readVarUhInt();
    if (this->rights < 0) {

    }
}

void GuildMember::_connectedFunc(CustomDataInput *input) {
    this->connected = input->readByte();
    if (this->connected < 0) {

    }
}

void GuildMember::_alignmentSideFunc(CustomDataInput *input) {
    this->alignmentSide = input->readByte();
}

void GuildMember::_hoursSinceLastConnectionFunc(CustomDataInput *input) {
    this->hoursSinceLastConnection = input->readUnsignedShort();
    if (this->hoursSinceLastConnection < 0 || this->hoursSinceLastConnection > 65535) {

    }
}

void GuildMember::_moodSmileyIdFunc(CustomDataInput *input) {
    this->moodSmileyId = input->readVarUhShort();
    if (this->moodSmileyId < 0) {

    }
}

void GuildMember::_accountIdFunc(CustomDataInput *input) {
    this->accountId = input->readInt();
    if (this->accountId < 0) {

    }
}

void GuildMember::_achievementPointsFunc(CustomDataInput *input) {
    this->achievementPoints = input->readInt();
}
