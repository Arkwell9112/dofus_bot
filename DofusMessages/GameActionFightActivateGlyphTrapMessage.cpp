#include "GameActionFightActivateGlyphTrapMessage.h"
#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionFightActivateGlyphTrapMessage::deserialize(CustomDataInput *input) {
    AbstractGameActionMessage::deserialize(input);
    this->_markIdFunc(input);
    this->_activeFunc(input);
}

void GameActionFightActivateGlyphTrapMessage::_markIdFunc(CustomDataInput *input) {
    this->markId = input->readShort();
}

void GameActionFightActivateGlyphTrapMessage::_activeFunc(CustomDataInput *input) {
    this->active = input->readBoolean();
}
