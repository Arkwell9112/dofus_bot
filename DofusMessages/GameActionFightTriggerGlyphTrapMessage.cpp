#include "GameActionFightTriggerGlyphTrapMessage.h"
#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionFightTriggerGlyphTrapMessage::deserialize(CustomDataInput *input) {
    AbstractGameActionMessage::deserialize(input);
    this->_markIdFunc(input);
    this->_markImpactCellFunc(input);
    this->_triggeringCharacterIdFunc(input);
    this->_triggeredSpellIdFunc(input);
}

void GameActionFightTriggerGlyphTrapMessage::_markIdFunc(CustomDataInput *input) {
    this->markId = input->readShort();
}

void GameActionFightTriggerGlyphTrapMessage::_markImpactCellFunc(CustomDataInput *input) {
    this->markImpactCell = input->readVarUhShort();
    if (this->markImpactCell < 0) {

    }
}

void GameActionFightTriggerGlyphTrapMessage::_triggeringCharacterIdFunc(CustomDataInput *input) {
    this->triggeringCharacterId = input->readDouble();
    if (this->triggeringCharacterId < -9007199254740990 || this->triggeringCharacterId > 9007199254740990) {

    }
}

void GameActionFightTriggerGlyphTrapMessage::_triggeredSpellIdFunc(CustomDataInput *input) {
    this->triggeredSpellId = input->readVarUhShort();
    if (this->triggeredSpellId < 0) {

    }
}
