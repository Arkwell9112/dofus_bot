#ifndef CHALLENGETARGETSLISTREQUESTMESSAGE_H
#define CHALLENGETARGETSLISTREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ChallengeTargetsListRequestMessage : public DeserializeInterface {
public:
    unsigned int challengeId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _challengeIdFunc(CustomDataInput *input);
};

#endif