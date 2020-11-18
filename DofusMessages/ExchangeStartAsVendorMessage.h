#ifndef EXCHANGESTARTASVENDORMESSAGE_H
#define EXCHANGESTARTASVENDORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeStartAsVendorMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif