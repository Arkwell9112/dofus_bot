#ifndef INVITEINHAVENBAGOFFERMESSAGE_H
#define INVITEINHAVENBAGOFFERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/CharacterMinimalInformations.h"

#include <string>
#include <vector>

class InviteInHavenBagOfferMessage : public DeserializeInterface {
public:
    CharacterMinimalInformations hostInformations;
    int timeLeftBeforeCancel = 0;

    void deserialize(CustomDataInput *input);

private:
    void _timeLeftBeforeCancelFunc(CustomDataInput *input);
};

#endif