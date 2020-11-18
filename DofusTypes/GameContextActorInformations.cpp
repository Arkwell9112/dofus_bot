#include "GameContextActorPositionInformations.h"
#include "GameContextActorInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameContextActorInformations::deserialize(CustomDataInput *input) {
    GameContextActorPositionInformations::deserialize(input);
    this->look.deserialize(input);
}