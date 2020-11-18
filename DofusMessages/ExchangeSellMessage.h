#ifndef EXCHANGESELLMESSAGE_H
#define EXCHANGESELLMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeSellMessage : public DeserializeInterface {
public:
    unsigned int objectToSellId = 0;
    unsigned int quantity = 0;

    void deserialize(CustomDataInput *input);

private:
    void _objectToSellIdFunc(CustomDataInput *input);

    void _quantityFunc(CustomDataInput *input);
};

#endif