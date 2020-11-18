#ifndef GAMEROLEPLAYGROUPMONSTERWAVEINFORMATIONS_H
#define GAMEROLEPLAYGROUPMONSTERWAVEINFORMATIONS_H

#include "GroupMonsterStaticInformations.h"
#include "GameRolePlayGroupMonsterInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayGroupMonsterWaveInformations : public GameRolePlayGroupMonsterInformations {
public:
    unsigned int nbWaves = 0;
    std::vector<GroupMonsterStaticInformations> alternatives;

    void deserialize(CustomDataInput *input);

private:
    void _nbWavesFunc(CustomDataInput *input);

    void _alternativesFunc(CustomDataInput *input);
};

#endif