#ifndef TAXCOLLECTORLISTMESSAGE_H
#define TAXCOLLECTORLISTMESSAGE_H

#include "AbstractTaxCollectorListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/TaxCollectorFightersInformation.h"

#include <string>
#include <vector>

class TaxCollectorListMessage : public AbstractTaxCollectorListMessage {
public:
    unsigned int nbcollectorMax = 0;
    std::vector<TaxCollectorFightersInformation> fightersInformations;
    unsigned int infoType = 0;

    void deserialize(CustomDataInput *input);

private:
    void _nbcollectorMaxFunc(CustomDataInput *input);

    void _infoTypeFunc(CustomDataInput *input);
};

#endif