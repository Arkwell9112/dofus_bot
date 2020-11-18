#ifndef PARTYNAMESETREQUESTMESSAGE_H
#define PARTYNAMESETREQUESTMESSAGE_H

#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyNameSetRequestMessage : public AbstractPartyMessage {
public:
    std::string partyName;

    void deserialize(CustomDataInput *input);

private:
    void _partyNameFunc(CustomDataInput *input);
};

#endif