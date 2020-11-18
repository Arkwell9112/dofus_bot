#ifndef BREACHINVITATIONOFFERMESSAGE_H
#define BREACHINVITATIONOFFERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/CharacterMinimalInformations.h"

#include <string>
#include <vector>

class BreachInvitationOfferMessage : public DeserializeInterface {
public:
    CharacterMinimalInformations host;
    unsigned int timeLeftBeforeCancel = 0;

    void deserialize(CustomDataInput *input);

private:
    void _timeLeftBeforeCancelFunc(CustomDataInput *input);
};

#endif