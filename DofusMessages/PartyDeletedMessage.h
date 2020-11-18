#ifndef PARTYDELETEDMESSAGE_H
#define PARTYDELETEDMESSAGE_H

#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyDeletedMessage : public AbstractPartyMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif