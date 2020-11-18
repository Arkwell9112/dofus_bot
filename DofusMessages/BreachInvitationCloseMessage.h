#ifndef BREACHINVITATIONCLOSEMESSAGE_H
#define BREACHINVITATIONCLOSEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/CharacterMinimalInformations.h"

#include <string>
#include <vector>

class BreachInvitationCloseMessage : public DeserializeInterface {
public:
    CharacterMinimalInformations host;

    void deserialize(CustomDataInput *input);

private:
};

#endif