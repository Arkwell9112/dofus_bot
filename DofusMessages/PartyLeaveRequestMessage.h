#ifndef PARTYLEAVEREQUESTMESSAGE_H
#define PARTYLEAVEREQUESTMESSAGE_H

#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyLeaveRequestMessage : public AbstractPartyMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif