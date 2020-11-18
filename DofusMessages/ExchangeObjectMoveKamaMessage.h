#ifndef EXCHANGEOBJECTMOVEKAMAMESSAGE_H
#define EXCHANGEOBJECTMOVEKAMAMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeObjectMoveKamaMessage : public DeserializeInterface {
public:
    double quantity = 0;

    void deserialize(CustomDataInput *input);

private:
    void _quantityFunc(CustomDataInput *input);
};

#endif