#ifndef INVITEINHAVENBAGCLOSEDMESSAGE_H
#define INVITEINHAVENBAGCLOSEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/CharacterMinimalInformations.h"

#include <string>
#include <vector>

class InviteInHavenBagClosedMessage : public DeserializeInterface {
public:
    CharacterMinimalInformations hostInformations;

    void deserialize(CustomDataInput *input);

private:
};

#endif