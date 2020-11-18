#ifndef EXCHANGEOBJECTREMOVEDFROMBAGMESSAGE_H
#define EXCHANGEOBJECTREMOVEDFROMBAGMESSAGE_H

#include "ExchangeObjectMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeObjectRemovedFromBagMessage : public ExchangeObjectMessage {
public:
    unsigned int objectUID = 0;

    void deserialize(CustomDataInput *input);

private:
    void _objectUIDFunc(CustomDataInput *input);
};

#endif