#include "GameRolePlayActorInformations.h"
#include "GameContextActorInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayActorInformations::deserialize(CustomDataInput *input) {
    GameContextActorInformations::deserialize(input);
}