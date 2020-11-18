#ifndef CHARACTERCHARACTERISTICSINFORMATIONS_H
#define CHARACTERCHARACTERISTICSINFORMATIONS_H

#include "CharacterSpellModification.h"
#include "CharacterBaseCharacteristic.h"
#include "ActorExtendedAlignmentInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterCharacteristicsInformations : public DeserializeInterface {
public:
    double experience = 0;
    double experienceLevelFloor = 0;
    double experienceNextLevelFloor = 0;
    double experienceBonusLimit = 0;
    double kamas = 0;
    unsigned int statsPoints = 0;
    unsigned int additionnalPoints = 0;
    unsigned int spellsPoints = 0;
    ActorExtendedAlignmentInformations alignmentInfos;
    unsigned int lifePoints = 0;
    unsigned int maxLifePoints = 0;
    unsigned int energyPoints = 0;
    unsigned int maxEnergyPoints = 0;
    int actionPointsCurrent = 0;
    int movementPointsCurrent = 0;
    CharacterBaseCharacteristic initiative;
    CharacterBaseCharacteristic prospecting;
    CharacterBaseCharacteristic actionPoints;
    CharacterBaseCharacteristic movementPoints;
    CharacterBaseCharacteristic strength;
    CharacterBaseCharacteristic vitality;
    CharacterBaseCharacteristic wisdom;
    CharacterBaseCharacteristic chance;
    CharacterBaseCharacteristic agility;
    CharacterBaseCharacteristic intelligence;
    CharacterBaseCharacteristic range;
    CharacterBaseCharacteristic summonableCreaturesBoost;
    CharacterBaseCharacteristic reflect;
    CharacterBaseCharacteristic criticalHit;
    unsigned int criticalHitWeapon = 0;
    CharacterBaseCharacteristic criticalMiss;
    CharacterBaseCharacteristic healBonus;
    CharacterBaseCharacteristic allDamagesBonus;
    CharacterBaseCharacteristic weaponDamagesBonusPercent;
    CharacterBaseCharacteristic damagesBonusPercent;
    CharacterBaseCharacteristic trapBonus;
    CharacterBaseCharacteristic trapBonusPercent;
    CharacterBaseCharacteristic glyphBonusPercent;
    CharacterBaseCharacteristic runeBonusPercent;
    CharacterBaseCharacteristic permanentDamagePercent;
    CharacterBaseCharacteristic tackleBlock;
    CharacterBaseCharacteristic tackleEvade;
    CharacterBaseCharacteristic PAAttack;
    CharacterBaseCharacteristic PMAttack;
    CharacterBaseCharacteristic pushDamageBonus;
    CharacterBaseCharacteristic criticalDamageBonus;
    CharacterBaseCharacteristic neutralDamageBonus;
    CharacterBaseCharacteristic earthDamageBonus;
    CharacterBaseCharacteristic waterDamageBonus;
    CharacterBaseCharacteristic airDamageBonus;
    CharacterBaseCharacteristic fireDamageBonus;
    CharacterBaseCharacteristic dodgePALostProbability;
    CharacterBaseCharacteristic dodgePMLostProbability;
    CharacterBaseCharacteristic neutralElementResistPercent;
    CharacterBaseCharacteristic earthElementResistPercent;
    CharacterBaseCharacteristic waterElementResistPercent;
    CharacterBaseCharacteristic airElementResistPercent;
    CharacterBaseCharacteristic fireElementResistPercent;
    CharacterBaseCharacteristic neutralElementReduction;
    CharacterBaseCharacteristic earthElementReduction;
    CharacterBaseCharacteristic waterElementReduction;
    CharacterBaseCharacteristic airElementReduction;
    CharacterBaseCharacteristic fireElementReduction;
    CharacterBaseCharacteristic pushDamageReduction;
    CharacterBaseCharacteristic criticalDamageReduction;
    CharacterBaseCharacteristic pvpNeutralElementResistPercent;
    CharacterBaseCharacteristic pvpEarthElementResistPercent;
    CharacterBaseCharacteristic pvpWaterElementResistPercent;
    CharacterBaseCharacteristic pvpAirElementResistPercent;
    CharacterBaseCharacteristic pvpFireElementResistPercent;
    CharacterBaseCharacteristic pvpNeutralElementReduction;
    CharacterBaseCharacteristic pvpEarthElementReduction;
    CharacterBaseCharacteristic pvpWaterElementReduction;
    CharacterBaseCharacteristic pvpAirElementReduction;
    CharacterBaseCharacteristic pvpFireElementReduction;
    CharacterBaseCharacteristic meleeDamageDonePercent;
    CharacterBaseCharacteristic meleeDamageReceivedPercent;
    CharacterBaseCharacteristic rangedDamageDonePercent;
    CharacterBaseCharacteristic rangedDamageReceivedPercent;
    CharacterBaseCharacteristic weaponDamageDonePercent;
    CharacterBaseCharacteristic weaponDamageReceivedPercent;
    CharacterBaseCharacteristic spellDamageDonePercent;
    CharacterBaseCharacteristic spellDamageReceivedPercent;
    std::vector<CharacterSpellModification> spellModifications;
    unsigned int probationTime = 0;

    void deserialize(CustomDataInput *input);

private:
    void _experienceFunc(CustomDataInput *input);

    void _experienceLevelFloorFunc(CustomDataInput *input);

    void _experienceNextLevelFloorFunc(CustomDataInput *input);

    void _experienceBonusLimitFunc(CustomDataInput *input);

    void _kamasFunc(CustomDataInput *input);

    void _statsPointsFunc(CustomDataInput *input);

    void _additionnalPointsFunc(CustomDataInput *input);

    void _spellsPointsFunc(CustomDataInput *input);

    void _lifePointsFunc(CustomDataInput *input);

    void _maxLifePointsFunc(CustomDataInput *input);

    void _energyPointsFunc(CustomDataInput *input);

    void _maxEnergyPointsFunc(CustomDataInput *input);

    void _actionPointsCurrentFunc(CustomDataInput *input);

    void _movementPointsCurrentFunc(CustomDataInput *input);

    void _criticalHitWeaponFunc(CustomDataInput *input);

    void _probationTimeFunc(CustomDataInput *input);
};

#endif