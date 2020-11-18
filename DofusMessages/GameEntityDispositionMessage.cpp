#include "GameEntityDispositionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameEntityDispositionMessage::deserialize(CustomDataInput *input) {
    this->disposition.deserialize(input);
}