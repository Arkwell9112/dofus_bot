#ifndef PARTYENTITYMEMBERINFORMATION_H
#define PARTYENTITYMEMBERINFORMATION_H

#include "PartyEntityBaseInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyEntityMemberInformation : public PartyEntityBaseInformation {
public:
    unsigned int initiative = 0;
    unsigned int lifePoints = 0;
    unsigned int maxLifePoints = 0;
    unsigned int prospecting = 0;
    unsigned int regenRate = 0;

    void deserialize(CustomDataInput *input);

private:
    void _initiativeFunc(CustomDataInput *input);

    void _lifePointsFunc(CustomDataInput *input);

    void _maxLifePointsFunc(CustomDataInput *input);

    void _prospectingFunc(CustomDataInput *input);

    void _regenRateFunc(CustomDataInput *input);
};

#endif