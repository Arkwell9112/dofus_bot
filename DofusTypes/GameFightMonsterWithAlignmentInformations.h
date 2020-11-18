#ifndef GAMEFIGHTMONSTERWITHALIGNMENTINFORMATIONS_H
#define GAMEFIGHTMONSTERWITHALIGNMENTINFORMATIONS_H

#include "GameFightMonsterInformations.h"
#include "ActorAlignmentInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightMonsterWithAlignmentInformations : public GameFightMonsterInformations {
public:
    ActorAlignmentInformations alignmentInfos;

    void deserialize(CustomDataInput *input);

private:
};

#endif