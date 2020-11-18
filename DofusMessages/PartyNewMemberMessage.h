#ifndef PARTYNEWMEMBERMESSAGE_H
#define PARTYNEWMEMBERMESSAGE_H

#include "PartyUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyNewMemberMessage : public PartyUpdateMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif