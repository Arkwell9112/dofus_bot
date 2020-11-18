#ifndef CHALLENGEINFOMESSAGE_H
#define CHALLENGEINFOMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ChallengeInfoMessage : public DeserializeInterface {
public:
    unsigned int challengeId = 0;
    double targetId = 0;
    unsigned int xpBonus = 0;
    unsigned int dropBonus = 0;

    void deserialize(CustomDataInput *input);

private:
    void _challengeIdFunc(CustomDataInput *input);

    void _targetIdFunc(CustomDataInput *input);

    void _xpBonusFunc(CustomDataInput *input);

    void _dropBonusFunc(CustomDataInput *input);
};

#endif