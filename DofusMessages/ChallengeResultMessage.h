#ifndef CHALLENGERESULTMESSAGE_H
#define CHALLENGERESULTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ChallengeResultMessage : public DeserializeInterface {
public:
    unsigned int challengeId = 0;
    bool success = false;

    void deserialize(CustomDataInput *input);

private:
    void _challengeIdFunc(CustomDataInput *input);

    void _successFunc(CustomDataInput *input);
};

#endif