#ifndef TAXCOLLECTORGUILDINFORMATIONS_H
#define TAXCOLLECTORGUILDINFORMATIONS_H

#include "TaxCollectorComplementaryInformations.h"
#include "GuildInformations.h"
#include "BasicGuildInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TaxCollectorGuildInformations : public TaxCollectorComplementaryInformations {
public:
    BasicGuildInformations guild;

    void deserialize(CustomDataInput *input);

private:
};

#endif