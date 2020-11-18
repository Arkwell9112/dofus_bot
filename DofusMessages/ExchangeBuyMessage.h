#ifndef EXCHANGEBUYMESSAGE_H
#define EXCHANGEBUYMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeBuyMessage : public DeserializeInterface {
public:
    unsigned int objectToBuyId = 0;
    unsigned int quantity = 0;

    void deserialize(CustomDataInput *input);

private:
    void _objectToBuyIdFunc(CustomDataInput *input);

    void _quantityFunc(CustomDataInput *input);
};

#endif