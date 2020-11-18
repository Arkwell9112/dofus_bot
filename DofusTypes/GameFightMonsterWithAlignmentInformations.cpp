#include "GameFightMonsterWithAlignmentInformations.h"
#include "GameFightMonsterInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightMonsterWithAlignmentInformations::deserialize(CustomDataInput *input) {
    GameFightMonsterInformations::deserialize(input);
    this->alignmentInfos.deserialize(input);
}