#include "CharacterSpellModification.h"
#include "CharacterCharacteristicsInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterCharacteristicsInformations::deserialize(CustomDataInput *input) {
    CharacterSpellModification _item84;
    this->_experienceFunc(input);
    this->_experienceLevelFloorFunc(input);
    this->_experienceNextLevelFloorFunc(input);
    this->_experienceBonusLimitFunc(input);
    this->_kamasFunc(input);
    this->_statsPointsFunc(input);
    this->_additionnalPointsFunc(input);
    this->_spellsPointsFunc(input);
    this->alignmentInfos.deserialize(input);
    this->_lifePointsFunc(input);
    this->_maxLifePointsFunc(input);
    this->_energyPointsFunc(input);
    this->_maxEnergyPointsFunc(input);
    this->_actionPointsCurrentFunc(input);
    this->_movementPointsCurrentFunc(input);
    this->initiative.deserialize(input);
    this->prospecting.deserialize(input);
    this->actionPoints.deserialize(input);
    this->movementPoints.deserialize(input);
    this->strength.deserialize(input);
    this->vitality.deserialize(input);
    this->wisdom.deserialize(input);
    this->chance.deserialize(input);
    this->agility.deserialize(input);
    this->intelligence.deserialize(input);
    this->range.deserialize(input);
    this->summonableCreaturesBoost.deserialize(input);
    this->reflect.deserialize(input);
    this->criticalHit.deserialize(input);
    this->_criticalHitWeaponFunc(input);
    this->criticalMiss.deserialize(input);
    this->healBonus.deserialize(input);
    this->allDamagesBonus.deserialize(input);
    this->weaponDamagesBonusPercent.deserialize(input);
    this->damagesBonusPercent.deserialize(input);
    this->trapBonus.deserialize(input);
    this->trapBonusPercent.deserialize(input);
    this->glyphBonusPercent.deserialize(input);
    this->runeBonusPercent.deserialize(input);
    this->permanentDamagePercent.deserialize(input);
    this->tackleBlock.deserialize(input);
    this->tackleEvade.deserialize(input);
    this->PAAttack.deserialize(input);
    this->PMAttack.deserialize(input);
    this->pushDamageBonus.deserialize(input);
    this->criticalDamageBonus.deserialize(input);
    this->neutralDamageBonus.deserialize(input);
    this->earthDamageBonus.deserialize(input);
    this->waterDamageBonus.deserialize(input);
    this->airDamageBonus.deserialize(input);
    this->fireDamageBonus.deserialize(input);
    this->dodgePALostProbability.deserialize(input);
    this->dodgePMLostProbability.deserialize(input);
    this->neutralElementResistPercent.deserialize(input);
    this->earthElementResistPercent.deserialize(input);
    this->waterElementResistPercent.deserialize(input);
    this->airElementResistPercent.deserialize(input);
    this->fireElementResistPercent.deserialize(input);
    this->neutralElementReduction.deserialize(input);
    this->earthElementReduction.deserialize(input);
    this->waterElementReduction.deserialize(input);
    this->airElementReduction.deserialize(input);
    this->fireElementReduction.deserialize(input);
    this->pushDamageReduction.deserialize(input);
    this->criticalDamageReduction.deserialize(input);
    this->pvpNeutralElementResistPercent.deserialize(input);
    this->pvpEarthElementResistPercent.deserialize(input);
    this->pvpWaterElementResistPercent.deserialize(input);
    this->pvpAirElementResistPercent.deserialize(input);
    this->pvpFireElementResistPercent.deserialize(input);
    this->pvpNeutralElementReduction.deserialize(input);
    this->pvpEarthElementReduction.deserialize(input);
    this->pvpWaterElementReduction.deserialize(input);
    this->pvpAirElementReduction.deserialize(input);
    this->pvpFireElementReduction.deserialize(input);
    this->meleeDamageDonePercent.deserialize(input);
    this->meleeDamageReceivedPercent.deserialize(input);
    this->rangedDamageDonePercent.deserialize(input);
    this->rangedDamageReceivedPercent.deserialize(input);
    this->weaponDamageDonePercent.deserialize(input);
    this->weaponDamageReceivedPercent.deserialize(input);
    this->spellDamageDonePercent.deserialize(input);
    this->spellDamageReceivedPercent.deserialize(input);
    unsigned int _spellModificationsLen = input->readUnsignedShort();
    for (unsigned int _i84 = 0; _i84 < _spellModificationsLen; _i84++) {
        _item84.deserialize(input);
        this->spellModifications.push_back(_item84);
    }
    this->_probationTimeFunc(input);
}

void CharacterCharacteristicsInformations::_experienceFunc(CustomDataInput *input) {
    this->experience = input->readVarUhLong();
    if (this->experience < 0 || this->experience > 9007199254740990) {

    }
}

void CharacterCharacteristicsInformations::_experienceLevelFloorFunc(CustomDataInput *input) {
    this->experienceLevelFloor = input->readVarUhLong();
    if (this->experienceLevelFloor < 0 || this->experienceLevelFloor > 9007199254740990) {

    }
}

void CharacterCharacteristicsInformations::_experienceNextLevelFloorFunc(CustomDataInput *input) {
    this->experienceNextLevelFloor = input->readVarUhLong();
    if (this->experienceNextLevelFloor < 0 || this->experienceNextLevelFloor > 9007199254740990) {

    }
}

void CharacterCharacteristicsInformations::_experienceBonusLimitFunc(CustomDataInput *input) {
    this->experienceBonusLimit = input->readVarUhLong();
    if (this->experienceBonusLimit < 0 || this->experienceBonusLimit > 9007199254740990) {

    }
}

void CharacterCharacteristicsInformations::_kamasFunc(CustomDataInput *input) {
    this->kamas = input->readVarUhLong();
    if (this->kamas < 0 || this->kamas > 9007199254740990) {

    }
}

void CharacterCharacteristicsInformations::_statsPointsFunc(CustomDataInput *input) {
    this->statsPoints = input->readVarUhShort();
    if (this->statsPoints < 0) {

    }
}

void CharacterCharacteristicsInformations::_additionnalPointsFunc(CustomDataInput *input) {
    this->additionnalPoints = input->readVarUhShort();
    if (this->additionnalPoints < 0) {

    }
}

void CharacterCharacteristicsInformations::_spellsPointsFunc(CustomDataInput *input) {
    this->spellsPoints = input->readVarUhShort();
    if (this->spellsPoints < 0) {

    }
}

void CharacterCharacteristicsInformations::_lifePointsFunc(CustomDataInput *input) {
    this->lifePoints = input->readVarUhInt();
    if (this->lifePoints < 0) {

    }
}

void CharacterCharacteristicsInformations::_maxLifePointsFunc(CustomDataInput *input) {
    this->maxLifePoints = input->readVarUhInt();
    if (this->maxLifePoints < 0) {

    }
}

void CharacterCharacteristicsInformations::_energyPointsFunc(CustomDataInput *input) {
    this->energyPoints = input->readVarUhShort();
    if (this->energyPoints < 0) {

    }
}

void CharacterCharacteristicsInformations::_maxEnergyPointsFunc(CustomDataInput *input) {
    this->maxEnergyPoints = input->readVarUhShort();
    if (this->maxEnergyPoints < 0) {

    }
}

void CharacterCharacteristicsInformations::_actionPointsCurrentFunc(CustomDataInput *input) {
    this->actionPointsCurrent = input->readVarShort();
}

void CharacterCharacteristicsInformations::_movementPointsCurrentFunc(CustomDataInput *input) {
    this->movementPointsCurrent = input->readVarShort();
}

void CharacterCharacteristicsInformations::_criticalHitWeaponFunc(CustomDataInput *input) {
    this->criticalHitWeapon = input->readVarUhShort();
    if (this->criticalHitWeapon < 0) {

    }
}

void CharacterCharacteristicsInformations::_probationTimeFunc(CustomDataInput *input) {
    this->probationTime = input->readInt();
    if (this->probationTime < 0) {

    }
}
