#include "GameRolePlayArenaUpdatePlayerInfosMessage.h"
#include "GameRolePlayArenaUpdatePlayerInfosAllQueuesMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayArenaUpdatePlayerInfosAllQueuesMessage::deserialize(CustomDataInput *input) {
    GameRolePlayArenaUpdatePlayerInfosMessage::deserialize(input);
    this->team.deserialize(input);
    this->duel.deserialize(input);
}