#ifndef TAXCOLLECTORFIGHTERSINFORMATION_H
#define TAXCOLLECTORFIGHTERSINFORMATION_H

#include "CharacterMinimalPlusLookInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TaxCollectorFightersInformation : public DeserializeInterface {
public:
    double collectorId = 0;
    std::vector<CharacterMinimalPlusLookInformations> allyCharactersInformations;
    std::vector<CharacterMinimalPlusLookInformations> enemyCharactersInformations;

    void deserialize(CustomDataInput *input);

private:
    void _collectorIdFunc(CustomDataInput *input);

    void _allyCharactersInformationsFunc(CustomDataInput *input);

    void _enemyCharactersInformationsFunc(CustomDataInput *input);
};

#endif