#ifndef GAMEFIGHTMINIMALSTATS_H
#define GAMEFIGHTMINIMALSTATS_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightMinimalStats : public DeserializeInterface {
public:
    unsigned int lifePoints = 0;
    unsigned int maxLifePoints = 0;
    unsigned int baseMaxLifePoints = 0;
    unsigned int permanentDamagePercent = 0;
    unsigned int shieldPoints = 0;
    int actionPoints = 0;
    int maxActionPoints = 0;
    int movementPoints = 0;
    int maxMovementPoints = 0;
    double summoner = 0;
    bool summoned = false;
    int neutralElementResistPercent = 0;
    int earthElementResistPercent = 0;
    int waterElementResistPercent = 0;
    int airElementResistPercent = 0;
    int fireElementResistPercent = 0;
    int neutralElementReduction = 0;
    int earthElementReduction = 0;
    int waterElementReduction = 0;
    int airElementReduction = 0;
    int fireElementReduction = 0;
    int criticalDamageFixedResist = 0;
    int pushDamageFixedResist = 0;
    int pvpNeutralElementResistPercent = 0;
    int pvpEarthElementResistPercent = 0;
    int pvpWaterElementResistPercent = 0;
    int pvpAirElementResistPercent = 0;
    int pvpFireElementResistPercent = 0;
    int pvpNeutralElementReduction = 0;
    int pvpEarthElementReduction = 0;
    int pvpWaterElementReduction = 0;
    int pvpAirElementReduction = 0;
    int pvpFireElementReduction = 0;
    unsigned int dodgePALostProbability = 0;
    unsigned int dodgePMLostProbability = 0;
    int tackleBlock = 0;
    int tackleEvade = 0;
    int fixedDamageReflection = 0;
    unsigned int invisibilityState = 0;
    unsigned int meleeDamageReceivedPercent = 0;
    unsigned int rangedDamageReceivedPercent = 0;
    unsigned int weaponDamageReceivedPercent = 0;
    unsigned int spellDamageReceivedPercent = 0;

    void deserialize(CustomDataInput *input);

private:
    void _lifePointsFunc(CustomDataInput *input);

    void _maxLifePointsFunc(CustomDataInput *input);

    void _baseMaxLifePointsFunc(CustomDataInput *input);

    void _permanentDamagePercentFunc(CustomDataInput *input);

    void _shieldPointsFunc(CustomDataInput *input);

    void _actionPointsFunc(CustomDataInput *input);

    void _maxActionPointsFunc(CustomDataInput *input);

    void _movementPointsFunc(CustomDataInput *input);

    void _maxMovementPointsFunc(CustomDataInput *input);

    void _summonerFunc(CustomDataInput *input);

    void _summonedFunc(CustomDataInput *input);

    void _neutralElementResistPercentFunc(CustomDataInput *input);

    void _earthElementResistPercentFunc(CustomDataInput *input);

    void _waterElementResistPercentFunc(CustomDataInput *input);

    void _airElementResistPercentFunc(CustomDataInput *input);

    void _fireElementResistPercentFunc(CustomDataInput *input);

    void _neutralElementReductionFunc(CustomDataInput *input);

    void _earthElementReductionFunc(CustomDataInput *input);

    void _waterElementReductionFunc(CustomDataInput *input);

    void _airElementReductionFunc(CustomDataInput *input);

    void _fireElementReductionFunc(CustomDataInput *input);

    void _criticalDamageFixedResistFunc(CustomDataInput *input);

    void _pushDamageFixedResistFunc(CustomDataInput *input);

    void _pvpNeutralElementResistPercentFunc(CustomDataInput *input);

    void _pvpEarthElementResistPercentFunc(CustomDataInput *input);

    void _pvpWaterElementResistPercentFunc(CustomDataInput *input);

    void _pvpAirElementResistPercentFunc(CustomDataInput *input);

    void _pvpFireElementResistPercentFunc(CustomDataInput *input);

    void _pvpNeutralElementReductionFunc(CustomDataInput *input);

    void _pvpEarthElementReductionFunc(CustomDataInput *input);

    void _pvpWaterElementReductionFunc(CustomDataInput *input);

    void _pvpAirElementReductionFunc(CustomDataInput *input);

    void _pvpFireElementReductionFunc(CustomDataInput *input);

    void _dodgePALostProbabilityFunc(CustomDataInput *input);

    void _dodgePMLostProbabilityFunc(CustomDataInput *input);

    void _tackleBlockFunc(CustomDataInput *input);

    void _tackleEvadeFunc(CustomDataInput *input);

    void _fixedDamageReflectionFunc(CustomDataInput *input);

    void _invisibilityStateFunc(CustomDataInput *input);

    void _meleeDamageReceivedPercentFunc(CustomDataInput *input);

    void _rangedDamageReceivedPercentFunc(CustomDataInput *input);

    void _weaponDamageReceivedPercentFunc(CustomDataInput *input);

    void _spellDamageReceivedPercentFunc(CustomDataInput *input);
};

#endif