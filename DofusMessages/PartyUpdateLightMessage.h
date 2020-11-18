#ifndef PARTYUPDATELIGHTMESSAGE_H
#define PARTYUPDATELIGHTMESSAGE_H

#include "AbstractPartyEventMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyUpdateLightMessage : public AbstractPartyEventMessage {
public:
    double id = 0;
    unsigned int lifePoints = 0;
    unsigned int maxLifePoints = 0;
    unsigned int prospecting = 0;
    unsigned int regenRate = 0;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);

    void _lifePointsFunc(CustomDataInput *input);

    void _maxLifePointsFunc(CustomDataInput *input);

    void _prospectingFunc(CustomDataInput *input);

    void _regenRateFunc(CustomDataInput *input);
};

#endif