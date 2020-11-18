#ifndef TAXCOLLECTORERRORMESSAGE_H
#define TAXCOLLECTORERRORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TaxCollectorErrorMessage : public DeserializeInterface {
public:
    int reason = 0;

    void deserialize(CustomDataInput *input);

private:
    void _reasonFunc(CustomDataInput *input);
};

#endif