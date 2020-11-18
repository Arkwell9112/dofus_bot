#ifndef ABSTRACTPARTYEVENTMESSAGE_H
#define ABSTRACTPARTYEVENTMESSAGE_H

#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AbstractPartyEventMessage : public AbstractPartyMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif