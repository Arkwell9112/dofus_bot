#ifndef INVITEINHAVENBAGMESSAGE_H
#define INVITEINHAVENBAGMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/CharacterMinimalInformations.h"

#include <string>
#include <vector>

class InviteInHavenBagMessage : public DeserializeInterface {
public:
    CharacterMinimalInformations guestInformations;
    bool accept = false;

    void deserialize(CustomDataInput *input);

private:
    void _acceptFunc(CustomDataInput *input);
};

#endif