#ifndef GAMEFIGHTTAXCOLLECTORINFORMATIONS_H
#define GAMEFIGHTTAXCOLLECTORINFORMATIONS_H

#include "TaxCollectorInformations.h"
#include "GameFightAIInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightTaxCollectorInformations : public GameFightAIInformations {
public:
    unsigned int firstNameId = 0;
    unsigned int lastNameId = 0;
    unsigned int level = 0;

    void deserialize(CustomDataInput *input);

private:
    void _firstNameIdFunc(CustomDataInput *input);

    void _lastNameIdFunc(CustomDataInput *input);

    void _levelFunc(CustomDataInput *input);
};

#endif