#include "GameRolePlayShowChallengeMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayShowChallengeMessage::deserialize(CustomDataInput *input) {
    this->commonsInfos.deserialize(input);
}