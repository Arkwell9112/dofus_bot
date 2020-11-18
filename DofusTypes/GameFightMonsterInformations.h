#ifndef GAMEFIGHTMONSTERINFORMATIONS_H
#define GAMEFIGHTMONSTERINFORMATIONS_H

#include "GameFightAIInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightMonsterInformations : public GameFightAIInformations {
public:
    unsigned int creatureGenericId = 0;
    unsigned int creatureGrade = 0;
    unsigned int creatureLevel = 0;

    void deserialize(CustomDataInput *input);

private:
    void _creatureGenericIdFunc(CustomDataInput *input);

    void _creatureGradeFunc(CustomDataInput *input);

    void _creatureLevelFunc(CustomDataInput *input);
};

#endif