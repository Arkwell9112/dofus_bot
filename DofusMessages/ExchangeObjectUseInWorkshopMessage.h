#ifndef EXCHANGEOBJECTUSEINWORKSHOPMESSAGE_H
#define EXCHANGEOBJECTUSEINWORKSHOPMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeObjectUseInWorkshopMessage : public DeserializeInterface {
public:
    unsigned int objectUID = 0;
    int quantity = 0;

    void deserialize(CustomDataInput *input);

private:
    void _objectUIDFunc(CustomDataInput *input);

    void _quantityFunc(CustomDataInput *input);
};

#endif