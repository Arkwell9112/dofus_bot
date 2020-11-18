#ifndef ABSTRACTPARTYMESSAGE_H
#define ABSTRACTPARTYMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AbstractPartyMessage : public DeserializeInterface {
public:
    unsigned int partyId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _partyIdFunc(CustomDataInput *input);
};

#endif