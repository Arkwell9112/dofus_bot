#ifndef PARTYLEADERUPDATEMESSAGE_H
#define PARTYLEADERUPDATEMESSAGE_H

#include "AbstractPartyEventMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyLeaderUpdateMessage : public AbstractPartyEventMessage {
public:
    double partyLeaderId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _partyLeaderIdFunc(CustomDataInput *input);
};

#endif