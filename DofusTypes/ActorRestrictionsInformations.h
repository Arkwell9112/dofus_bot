#ifndef ACTORRESTRICTIONSINFORMATIONS_H
#define ACTORRESTRICTIONSINFORMATIONS_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ActorRestrictionsInformations : public DeserializeInterface {
public:
    bool cantBeAggressed = false;
    bool cantBeChallenged = false;
    bool cantTrade = false;
    bool cantBeAttackedByMutant = false;
    bool cantRun = false;
    bool forceSlowWalk = false;
    bool cantMinimize = false;
    bool cantMove = false;
    bool cantAggress = false;
    bool cantChallenge = false;
    bool cantExchange = false;
    bool cantAttack = false;
    bool cantChat = false;
    bool cantBeMerchant = false;
    bool cantUseObject = false;
    bool cantUseTaxCollector = false;
    bool cantUseInteractive = false;
    bool cantSpeakToNPC = false;
    bool cantChangeZone = false;
    bool cantAttackMonster = false;
    bool cantWalk8Directions = false;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);
};

#endif