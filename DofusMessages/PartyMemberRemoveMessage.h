#ifndef PARTYMEMBERREMOVEMESSAGE_H
#define PARTYMEMBERREMOVEMESSAGE_H

#include "AbstractPartyEventMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyMemberRemoveMessage : public AbstractPartyEventMessage {
public:
    double leavingPlayerId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _leavingPlayerIdFunc(CustomDataInput *input);
};

#endif