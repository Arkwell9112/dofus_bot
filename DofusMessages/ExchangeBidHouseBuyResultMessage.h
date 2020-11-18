#ifndef EXCHANGEBIDHOUSEBUYRESULTMESSAGE_H
#define EXCHANGEBIDHOUSEBUYRESULTMESSAGE_H

#include "HouseBuyResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeBidHouseBuyResultMessage : public DeserializeInterface {
public:
    unsigned int uid = 0;
    bool bought = false;

    void deserialize(CustomDataInput *input);

private:
    void _uidFunc(CustomDataInput *input);

    void _boughtFunc(CustomDataInput *input);
};

#endif