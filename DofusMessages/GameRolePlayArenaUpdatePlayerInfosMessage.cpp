#include "GameRolePlayArenaUpdatePlayerInfosMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayArenaUpdatePlayerInfosMessage::deserialize(CustomDataInput *input) {
    this->solo.deserialize(input);
}