#ifndef PARTYNAMEUPDATEMESSAGE_H
#define PARTYNAMEUPDATEMESSAGE_H

#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyNameUpdateMessage : public AbstractPartyMessage {
public:
    std::string partyName;

    void deserialize(CustomDataInput *input);

private:
    void _partyNameFunc(CustomDataInput *input);
};

#endif