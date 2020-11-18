#ifndef PARTYMEMBEREJECTEDMESSAGE_H
#define PARTYMEMBEREJECTEDMESSAGE_H

#include "PartyMemberRemoveMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyMemberEjectedMessage : public PartyMemberRemoveMessage {
public:
    double kickerId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _kickerIdFunc(CustomDataInput *input);
};

#endif