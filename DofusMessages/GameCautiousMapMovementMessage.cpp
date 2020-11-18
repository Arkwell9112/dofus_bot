#include "GameMapMovementMessage.h"
#include "GameCautiousMapMovementMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameCautiousMapMovementMessage::deserialize(CustomDataInput *input) {
    GameMapMovementMessage::deserialize(input);
}