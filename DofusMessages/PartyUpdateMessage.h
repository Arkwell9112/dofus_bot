#ifndef PARTYUPDATEMESSAGE_H
#define PARTYUPDATEMESSAGE_H

#include "AbstractPartyEventMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PartyMemberInformations.h"

#include <string>
#include <vector>

class PartyUpdateMessage : public AbstractPartyEventMessage {
public:
    PartyMemberInformations memberInformations;

    void deserialize(CustomDataInput *input);

private:
};

#endif