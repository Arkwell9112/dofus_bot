#ifndef TAXCOLLECTORLOOTINFORMATIONS_H
#define TAXCOLLECTORLOOTINFORMATIONS_H

#include "TaxCollectorComplementaryInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TaxCollectorLootInformations : public TaxCollectorComplementaryInformations {
public:
    double kamas = 0;
    double experience = 0;
    unsigned int pods = 0;
    double itemsValue = 0;

    void deserialize(CustomDataInput *input);

private:
    void _kamasFunc(CustomDataInput *input);

    void _experienceFunc(CustomDataInput *input);

    void _podsFunc(CustomDataInput *input);

    void _itemsValueFunc(CustomDataInput *input);
};

#endif