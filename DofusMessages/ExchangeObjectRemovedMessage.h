#ifndef EXCHANGEOBJECTREMOVEDMESSAGE_H
#define EXCHANGEOBJECTREMOVEDMESSAGE_H

#include "ExchangeObjectMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeObjectRemovedMessage : public ExchangeObjectMessage {
public:
    unsigned int objectUID = 0;

    void deserialize(CustomDataInput *input);

private:
    void _objectUIDFunc(CustomDataInput *input);
};

#endif