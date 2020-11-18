#ifndef ALLIANCEMEMBERSHIPMESSAGE_H
#define ALLIANCEMEMBERSHIPMESSAGE_H

#include "AllianceJoinedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AllianceMembershipMessage : public AllianceJoinedMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif