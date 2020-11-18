#ifndef PRISMFIGHTERSINFORMATION_H
#define PRISMFIGHTERSINFORMATION_H

#include "ProtectedEntityWaitingForHelpInfo.h"
#include "CharacterMinimalPlusLookInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PrismFightersInformation : public DeserializeInterface {
public:
    unsigned int subAreaId = 0;
    ProtectedEntityWaitingForHelpInfo waitingForHelpInfo;
    std::vector<CharacterMinimalPlusLookInformations> allyCharactersInformations;
    std::vector<CharacterMinimalPlusLookInformations> enemyCharactersInformations;

    void deserialize(CustomDataInput *input);

private:
    void _subAreaIdFunc(CustomDataInput *input);

    void _allyCharactersInformationsFunc(CustomDataInput *input);

    void _enemyCharactersInformationsFunc(CustomDataInput *input);
};

#endif