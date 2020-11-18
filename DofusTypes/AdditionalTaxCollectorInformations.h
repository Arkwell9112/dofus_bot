#ifndef ADDITIONALTAXCOLLECTORINFORMATIONS_H
#define ADDITIONALTAXCOLLECTORINFORMATIONS_H

#include "TaxCollectorInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AdditionalTaxCollectorInformations : public DeserializeInterface {
public:
    std::string collectorCallerName;
    unsigned int date = 0;

    void deserialize(CustomDataInput *input);

private:
    void _collectorCallerNameFunc(CustomDataInput *input);

    void _dateFunc(CustomDataInput *input);
};

#endif