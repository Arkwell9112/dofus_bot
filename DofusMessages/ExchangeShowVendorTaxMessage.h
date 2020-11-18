#ifndef EXCHANGESHOWVENDORTAXMESSAGE_H
#define EXCHANGESHOWVENDORTAXMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeShowVendorTaxMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif