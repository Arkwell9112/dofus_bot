#include "GameContextMoveElementMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameContextMoveElementMessage::deserialize(CustomDataInput *input) {
    this->movement.deserialize(input);
}