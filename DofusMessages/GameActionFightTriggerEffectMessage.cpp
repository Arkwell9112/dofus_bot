#include "GameActionFightTriggerEffectMessage.h"
#include "GameActionFightDispellEffectMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionFightTriggerEffectMessage::deserialize(CustomDataInput *input) {
    GameActionFightDispellEffectMessage::deserialize(input);
}