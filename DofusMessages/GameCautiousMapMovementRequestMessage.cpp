#include "GameMapMovementRequestMessage.h"
#include "GameCautiousMapMovementRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameCautiousMapMovementRequestMessage::deserialize(CustomDataInput *input) {
    GameMapMovementRequestMessage::deserialize(input);
}