#include "GameMapChangeOrientationMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameMapChangeOrientationMessage::deserialize(CustomDataInput *input) {
    this->orientation.deserialize(input);
}