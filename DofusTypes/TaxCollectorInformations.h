#ifndef TAXCOLLECTORINFORMATIONS_H
#define TAXCOLLECTORINFORMATIONS_H

#include "TaxCollectorComplementaryInformations.h"
#include "EntityLook.h"
#include "AdditionalTaxCollectorInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TaxCollectorInformations : public DeserializeInterface {
public:
    double uniqueId = 0;
    unsigned int firtNameId = 0;
    unsigned int lastNameId = 0;
    AdditionalTaxCollectorInformations additionalInfos;
    int worldX = 0;
    int worldY = 0;
    unsigned int subAreaId = 0;
    unsigned int state = 0;
    EntityLook look;
    std::vector<TaxCollectorComplementaryInformations> complements;

    void deserialize(CustomDataInput *input);

private:
    void _uniqueIdFunc(CustomDataInput *input);

    void _firtNameIdFunc(CustomDataInput *input);

    void _lastNameIdFunc(CustomDataInput *input);

    void _worldXFunc(CustomDataInput *input);

    void _worldYFunc(CustomDataInput *input);

    void _subAreaIdFunc(CustomDataInput *input);

    void _stateFunc(CustomDataInput *input);

    void _complementsFunc(CustomDataInput *input);
};

#endif