#include "GroupMonsterStaticInformations.h"
#include "GameRolePlayGroupMonsterInformations.h"
#include "GameRolePlayActorInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayGroupMonsterInformations::deserialize(CustomDataInput *input) {
    GameRolePlayActorInformations::deserialize(input);
    this->deserializeByteBoxes(input);
    unsigned int _id1 = input->readUnsignedShort();
    this->staticInfos = *dynamic_cast<GroupMonsterStaticInformations *>(ProtocolTypeManager::getInstance(_id1, input));
    ProtocolTypeManager::deleteLastInstance();

    this->_lootShareFunc(input);
    this->_alignmentSideFunc(input);
}

void GameRolePlayGroupMonsterInformations::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->keyRingBonus = BooleanByteWrapper::getFlag(_box0, 0);
    this->hasHardcoreDrop = BooleanByteWrapper::getFlag(_box0, 1);
    this->hasAVARewardToken = BooleanByteWrapper::getFlag(_box0, 2);
}

void GameRolePlayGroupMonsterInformations::_lootShareFunc(CustomDataInput *input) {
    this->lootShare = input->readByte();
    if (this->lootShare < -1 || this->lootShare > 8) {

    }
}

void GameRolePlayGroupMonsterInformations::_alignmentSideFunc(CustomDataInput *input) {
    this->alignmentSide = input->readByte();
}
