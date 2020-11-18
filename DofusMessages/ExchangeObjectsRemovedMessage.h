#ifndef EXCHANGEOBJECTSREMOVEDMESSAGE_H
#define EXCHANGEOBJECTSREMOVEDMESSAGE_H

#include "ExchangeObjectMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeObjectsRemovedMessage : public ExchangeObjectMessage {
public:
    std::vector<unsigned int> objectUID;

    void deserialize(CustomDataInput *input);

private:
    void _objectUIDFunc(CustomDataInput *input);
};

#endif