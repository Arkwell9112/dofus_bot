#ifndef PADDOCKINSTANCESINFORMATIONS_H
#define PADDOCKINSTANCESINFORMATIONS_H

#include "PaddockInformations.h"
#include "PaddockBuyableInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PaddockInstancesInformations : public PaddockInformations {
public:
    std::vector<PaddockBuyableInformations> paddocks;

    void deserialize(CustomDataInput *input);

private:
    void _paddocksFunc(CustomDataInput *input);
};

#endif