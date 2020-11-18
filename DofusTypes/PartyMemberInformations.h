#ifndef PARTYMEMBERINFORMATIONS_H
#define PARTYMEMBERINFORMATIONS_H

#include "PlayerStatus.h"
#include "PartyEntityBaseInformation.h"
#include "CharacterBaseInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyMemberInformations : public CharacterBaseInformations {
public:
    unsigned int lifePoints = 0;
    unsigned int maxLifePoints = 0;
    unsigned int prospecting = 0;
    unsigned int regenRate = 0;
    unsigned int initiative = 0;
    int alignmentSide = 0;
    int worldX = 0;
    int worldY = 0;
    double mapId = 0;
    unsigned int subAreaId = 0;
    PlayerStatus status;
    std::vector<PartyEntityBaseInformation> entities;

    void deserialize(CustomDataInput *input);

private:
    void _lifePointsFunc(CustomDataInput *input);

    void _maxLifePointsFunc(CustomDataInput *input);

    void _prospectingFunc(CustomDataInput *input);

    void _regenRateFunc(CustomDataInput *input);

    void _initiativeFunc(CustomDataInput *input);

    void _alignmentSideFunc(CustomDataInput *input);

    void _worldXFunc(CustomDataInput *input);

    void _worldYFunc(CustomDataInput *input);

    void _mapIdFunc(CustomDataInput *input);

    void _subAreaIdFunc(CustomDataInput *input);

    void _entitiesFunc(CustomDataInput *input);
};

#endif