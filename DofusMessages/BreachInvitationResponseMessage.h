#ifndef BREACHINVITATIONRESPONSEMESSAGE_H
#define BREACHINVITATIONRESPONSEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/CharacterMinimalInformations.h"

#include <string>
#include <vector>

class BreachInvitationResponseMessage : public DeserializeInterface {
public:
    CharacterMinimalInformations guest;
    bool accept = false;

    void deserialize(CustomDataInput *input);

private:
    void _acceptFunc(CustomDataInput *input);
};

#endif