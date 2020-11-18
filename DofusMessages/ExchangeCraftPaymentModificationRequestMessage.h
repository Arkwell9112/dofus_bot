#ifndef EXCHANGECRAFTPAYMENTMODIFICATIONREQUESTMESSAGE_H
#define EXCHANGECRAFTPAYMENTMODIFICATIONREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeCraftPaymentModificationRequestMessage : public DeserializeInterface {
public:
    double quantity = 0;

    void deserialize(CustomDataInput *input);

private:
    void _quantityFunc(CustomDataInput *input);
};

#endif