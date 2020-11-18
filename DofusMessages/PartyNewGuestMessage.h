#ifndef PARTYNEWGUESTMESSAGE_H
#define PARTYNEWGUESTMESSAGE_H

#include "AbstractPartyEventMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PartyGuestInformations.h"

#include <string>
#include <vector>

class PartyNewGuestMessage : public AbstractPartyEventMessage {
public:
    PartyGuestInformations guest;

    void deserialize(CustomDataInput *input);

private:
};

#endif