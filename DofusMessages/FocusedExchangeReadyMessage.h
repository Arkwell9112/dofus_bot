#ifndef FOCUSEDEXCHANGEREADYMESSAGE_H
#define FOCUSEDEXCHANGEREADYMESSAGE_H

#include "ExchangeReadyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FocusedExchangeReadyMessage : public ExchangeReadyMessage {
public:
    unsigned int focusActionId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _focusActionIdFunc(CustomDataInput *input);
};

#endif