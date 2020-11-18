#ifndef PADDOCKBUYRESULTMESSAGE_H
#define PADDOCKBUYRESULTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PaddockBuyResultMessage : public DeserializeInterface {
public:
    double paddockId = 0;
    bool bought = false;
    double realPrice = 0;

    void deserialize(CustomDataInput *input);

private:
    void _paddockIdFunc(CustomDataInput *input);

    void _boughtFunc(CustomDataInput *input);

    void _realPriceFunc(CustomDataInput *input);
};

#endif