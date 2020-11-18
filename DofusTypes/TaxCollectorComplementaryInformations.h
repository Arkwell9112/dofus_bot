#ifndef TAXCOLLECTORCOMPLEMENTARYINFORMATIONS_H
#define TAXCOLLECTORCOMPLEMENTARYINFORMATIONS_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TaxCollectorComplementaryInformations : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif