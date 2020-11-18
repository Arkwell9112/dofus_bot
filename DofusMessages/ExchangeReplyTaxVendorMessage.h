#ifndef EXCHANGEREPLYTAXVENDORMESSAGE_H
#define EXCHANGEREPLYTAXVENDORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeReplyTaxVendorMessage : public DeserializeInterface {
public:
    double objectValue = 0;
    double totalTaxValue = 0;

    void deserialize(CustomDataInput *input);

private:
    void _objectValueFunc(CustomDataInput *input);

    void _totalTaxValueFunc(CustomDataInput *input);
};

#endif