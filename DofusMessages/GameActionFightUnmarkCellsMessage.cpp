#include "GameActionFightUnmarkCellsMessage.h"
#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionFightUnmarkCellsMessage::deserialize(CustomDataInput *input) {
    AbstractGameActionMessage::deserialize(input);
    this->_markIdFunc(input);
}

void GameActionFightUnmarkCellsMessage::_markIdFunc(CustomDataInput *input) {
    this->markId = input->readShort();
}
