#include "GameFightFighterInformations.h"
#include "GameFightAIInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightAIInformations::deserialize(CustomDataInput *input) {
    GameFightFighterInformations::deserialize(input);
}