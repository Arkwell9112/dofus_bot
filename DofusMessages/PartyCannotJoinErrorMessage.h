#ifndef PARTYCANNOTJOINERRORMESSAGE_H
#define PARTYCANNOTJOINERRORMESSAGE_H

#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyCannotJoinErrorMessage : public AbstractPartyMessage {
public:
    unsigned int reason = 0;

    void deserialize(CustomDataInput *input);

private:
    void _reasonFunc(CustomDataInput *input);
};

#endif