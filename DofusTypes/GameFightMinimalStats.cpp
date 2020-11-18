#include "GameFightMinimalStats.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightMinimalStats::deserialize(CustomDataInput *input) {
    this->_lifePointsFunc(input);
    this->_maxLifePointsFunc(input);
    this->_baseMaxLifePointsFunc(input);
    this->_permanentDamagePercentFunc(input);
    this->_shieldPointsFunc(input);
    this->_actionPointsFunc(input);
    this->_maxActionPointsFunc(input);
    this->_movementPointsFunc(input);
    this->_maxMovementPointsFunc(input);
    this->_summonerFunc(input);
    this->_summonedFunc(input);
    this->_neutralElementResistPercentFunc(input);
    this->_earthElementResistPercentFunc(input);
    this->_waterElementResistPercentFunc(input);
    this->_airElementResistPercentFunc(input);
    this->_fireElementResistPercentFunc(input);
    this->_neutralElementReductionFunc(input);
    this->_earthElementReductionFunc(input);
    this->_waterElementReductionFunc(input);
    this->_airElementReductionFunc(input);
    this->_fireElementReductionFunc(input);
    this->_criticalDamageFixedResistFunc(input);
    this->_pushDamageFixedResistFunc(input);
    this->_pvpNeutralElementResistPercentFunc(input);
    this->_pvpEarthElementResistPercentFunc(input);
    this->_pvpWaterElementResistPercentFunc(input);
    this->_pvpAirElementResistPercentFunc(input);
    this->_pvpFireElementResistPercentFunc(input);
    this->_pvpNeutralElementReductionFunc(input);
    this->_pvpEarthElementReductionFunc(input);
    this->_pvpWaterElementReductionFunc(input);
    this->_pvpAirElementReductionFunc(input);
    this->_pvpFireElementReductionFunc(input);
    this->_dodgePALostProbabilityFunc(input);
    this->_dodgePMLostProbabilityFunc(input);
    this->_tackleBlockFunc(input);
    this->_tackleEvadeFunc(input);
    this->_fixedDamageReflectionFunc(input);
    this->_invisibilityStateFunc(input);
    this->_meleeDamageReceivedPercentFunc(input);
    this->_rangedDamageReceivedPercentFunc(input);
    this->_weaponDamageReceivedPercentFunc(input);
    this->_spellDamageReceivedPercentFunc(input);
}

void GameFightMinimalStats::_lifePointsFunc(CustomDataInput *input) {
    this->lifePoints = input->readVarUhInt();
    if (this->lifePoints < 0) {

    }
}

void GameFightMinimalStats::_maxLifePointsFunc(CustomDataInput *input) {
    this->maxLifePoints = input->readVarUhInt();
    if (this->maxLifePoints < 0) {

    }
}

void GameFightMinimalStats::_baseMaxLifePointsFunc(CustomDataInput *input) {
    this->baseMaxLifePoints = input->readVarUhInt();
    if (this->baseMaxLifePoints < 0) {

    }
}

void GameFightMinimalStats::_permanentDamagePercentFunc(CustomDataInput *input) {
    this->permanentDamagePercent = input->readVarUhInt();
    if (this->permanentDamagePercent < 0) {

    }
}

void GameFightMinimalStats::_shieldPointsFunc(CustomDataInput *input) {
    this->shieldPoints = input->readVarUhInt();
    if (this->shieldPoints < 0) {

    }
}

void GameFightMinimalStats::_actionPointsFunc(CustomDataInput *input) {
    this->actionPoints = input->readVarShort();
}

void GameFightMinimalStats::_maxActionPointsFunc(CustomDataInput *input) {
    this->maxActionPoints = input->readVarShort();
}

void GameFightMinimalStats::_movementPointsFunc(CustomDataInput *input) {
    this->movementPoints = input->readVarShort();
}

void GameFightMinimalStats::_maxMovementPointsFunc(CustomDataInput *input) {
    this->maxMovementPoints = input->readVarShort();
}

void GameFightMinimalStats::_summonerFunc(CustomDataInput *input) {
    this->summoner = input->readDouble();
    if (this->summoner < -9007199254740990 || this->summoner > 9007199254740990) {

    }
}

void GameFightMinimalStats::_summonedFunc(CustomDataInput *input) {
    this->summoned = input->readBoolean();
}

void GameFightMinimalStats::_neutralElementResistPercentFunc(CustomDataInput *input) {
    this->neutralElementResistPercent = input->readVarShort();
}

void GameFightMinimalStats::_earthElementResistPercentFunc(CustomDataInput *input) {
    this->earthElementResistPercent = input->readVarShort();
}

void GameFightMinimalStats::_waterElementResistPercentFunc(CustomDataInput *input) {
    this->waterElementResistPercent = input->readVarShort();
}

void GameFightMinimalStats::_airElementResistPercentFunc(CustomDataInput *input) {
    this->airElementResistPercent = input->readVarShort();
}

void GameFightMinimalStats::_fireElementResistPercentFunc(CustomDataInput *input) {
    this->fireElementResistPercent = input->readVarShort();
}

void GameFightMinimalStats::_neutralElementReductionFunc(CustomDataInput *input) {
    this->neutralElementReduction = input->readVarShort();
}

void GameFightMinimalStats::_earthElementReductionFunc(CustomDataInput *input) {
    this->earthElementReduction = input->readVarShort();
}

void GameFightMinimalStats::_waterElementReductionFunc(CustomDataInput *input) {
    this->waterElementReduction = input->readVarShort();
}

void GameFightMinimalStats::_airElementReductionFunc(CustomDataInput *input) {
    this->airElementReduction = input->readVarShort();
}

void GameFightMinimalStats::_fireElementReductionFunc(CustomDataInput *input) {
    this->fireElementReduction = input->readVarShort();
}

void GameFightMinimalStats::_criticalDamageFixedResistFunc(CustomDataInput *input) {
    this->criticalDamageFixedResist = input->readVarShort();
}

void GameFightMinimalStats::_pushDamageFixedResistFunc(CustomDataInput *input) {
    this->pushDamageFixedResist = input->readVarShort();
}

void GameFightMinimalStats::_pvpNeutralElementResistPercentFunc(CustomDataInput *input) {
    this->pvpNeutralElementResistPercent = input->readVarShort();
}

void GameFightMinimalStats::_pvpEarthElementResistPercentFunc(CustomDataInput *input) {
    this->pvpEarthElementResistPercent = input->readVarShort();
}

void GameFightMinimalStats::_pvpWaterElementResistPercentFunc(CustomDataInput *input) {
    this->pvpWaterElementResistPercent = input->readVarShort();
}

void GameFightMinimalStats::_pvpAirElementResistPercentFunc(CustomDataInput *input) {
    this->pvpAirElementResistPercent = input->readVarShort();
}

void GameFightMinimalStats::_pvpFireElementResistPercentFunc(CustomDataInput *input) {
    this->pvpFireElementResistPercent = input->readVarShort();
}

void GameFightMinimalStats::_pvpNeutralElementReductionFunc(CustomDataInput *input) {
    this->pvpNeutralElementReduction = input->readVarShort();
}

void GameFightMinimalStats::_pvpEarthElementReductionFunc(CustomDataInput *input) {
    this->pvpEarthElementReduction = input->readVarShort();
}

void GameFightMinimalStats::_pvpWaterElementReductionFunc(CustomDataInput *input) {
    this->pvpWaterElementReduction = input->readVarShort();
}

void GameFightMinimalStats::_pvpAirElementReductionFunc(CustomDataInput *input) {
    this->pvpAirElementReduction = input->readVarShort();
}

void GameFightMinimalStats::_pvpFireElementReductionFunc(CustomDataInput *input) {
    this->pvpFireElementReduction = input->readVarShort();
}

void GameFightMinimalStats::_dodgePALostProbabilityFunc(CustomDataInput *input) {
    this->dodgePALostProbability = input->readVarUhShort();
    if (this->dodgePALostProbability < 0) {

    }
}

void GameFightMinimalStats::_dodgePMLostProbabilityFunc(CustomDataInput *input) {
    this->dodgePMLostProbability = input->readVarUhShort();
    if (this->dodgePMLostProbability < 0) {

    }
}

void GameFightMinimalStats::_tackleBlockFunc(CustomDataInput *input) {
    this->tackleBlock = input->readVarShort();
}

void GameFightMinimalStats::_tackleEvadeFunc(CustomDataInput *input) {
    this->tackleEvade = input->readVarShort();
}

void GameFightMinimalStats::_fixedDamageReflectionFunc(CustomDataInput *input) {
    this->fixedDamageReflection = input->readVarShort();
}

void GameFightMinimalStats::_invisibilityStateFunc(CustomDataInput *input) {
    this->invisibilityState = input->readByte();
    if (this->invisibilityState < 0) {

    }
}

void GameFightMinimalStats::_meleeDamageReceivedPercentFunc(CustomDataInput *input) {
    this->meleeDamageReceivedPercent = input->readVarUhShort();
    if (this->meleeDamageReceivedPercent < 0) {

    }
}

void GameFightMinimalStats::_rangedDamageReceivedPercentFunc(CustomDataInput *input) {
    this->rangedDamageReceivedPercent = input->readVarUhShort();
    if (this->rangedDamageReceivedPercent < 0) {

    }
}

void GameFightMinimalStats::_weaponDamageReceivedPercentFunc(CustomDataInput *input) {
    this->weaponDamageReceivedPercent = input->readVarUhShort();
    if (this->weaponDamageReceivedPercent < 0) {

    }
}

void GameFightMinimalStats::_spellDamageReceivedPercentFunc(CustomDataInput *input) {
    this->spellDamageReceivedPercent = input->readVarUhShort();
    if (this->spellDamageReceivedPercent < 0) {

    }
}
