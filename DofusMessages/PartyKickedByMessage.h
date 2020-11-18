#ifndef PARTYKICKEDBYMESSAGE_H
#define PARTYKICKEDBYMESSAGE_H

#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyKickedByMessage : public AbstractPartyMessage {
public:
    double kickerId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _kickerIdFunc(CustomDataInput *input);
};

#endif