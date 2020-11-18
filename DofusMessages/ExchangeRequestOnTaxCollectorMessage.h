#ifndef EXCHANGEREQUESTONTAXCOLLECTORMESSAGE_H
#define EXCHANGEREQUESTONTAXCOLLECTORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeRequestOnTaxCollectorMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif