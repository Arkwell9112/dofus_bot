#ifndef EXCHANGEKAMAMODIFIEDMESSAGE_H
#define EXCHANGEKAMAMODIFIEDMESSAGE_H

#include "ExchangeObjectMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeKamaModifiedMessage : public ExchangeObjectMessage {
public:
    double quantity = 0;

    void deserialize(CustomDataInput *input);

private:
    void _quantityFunc(CustomDataInput *input);
};

#endif