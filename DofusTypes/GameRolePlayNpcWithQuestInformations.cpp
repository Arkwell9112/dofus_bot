#include "GameRolePlayNpcWithQuestInformations.h"
#include "GameRolePlayNpcInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayNpcWithQuestInformations::deserialize(CustomDataInput *input) {
    GameRolePlayNpcInformations::deserialize(input);
    this->questFlag.deserialize(input);
}