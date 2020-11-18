#ifndef CHALLENGETARGETUPDATEMESSAGE_H
#define CHALLENGETARGETUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ChallengeTargetUpdateMessage : public DeserializeInterface {
public:
    unsigned int challengeId = 0;
    double targetId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _challengeIdFunc(CustomDataInput *input);

    void _targetIdFunc(CustomDataInput *input);
};

#endif