#include "GameRolePlayHumanoidInformations.h"
#include "GameRolePlayCharacterInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayCharacterInformations::deserialize(CustomDataInput *input) {
    GameRolePlayHumanoidInformations::deserialize(input);
    this->alignmentInfos.deserialize(input);
}