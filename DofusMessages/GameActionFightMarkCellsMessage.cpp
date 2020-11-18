#include "GameActionFightMarkCellsMessage.h"
#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionFightMarkCellsMessage::deserialize(CustomDataInput *input) {
    AbstractGameActionMessage::deserialize(input);
    this->mark.deserialize(input);
}