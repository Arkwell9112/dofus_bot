#include "GameActionFightSpellCastMessage.h"
#include "AbstractGameActionFightTargetedAbilityMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionFightSpellCastMessage::deserialize(CustomDataInput *input) {
    int _val3 = 0;
    AbstractGameActionFightTargetedAbilityMessage::deserialize(input);
    this->_spellIdFunc(input);
    this->_spellLevelFunc(input);
    unsigned int _portalsIdsLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _portalsIdsLen; _i3++) {
        _val3 = input->readShort();
        this->portalsIds.push_back(_val3);
    }
}

void GameActionFightSpellCastMessage::_spellIdFunc(CustomDataInput *input) {
    this->spellId = input->readVarUhShort();
    if (this->spellId < 0) {

    }
}

void GameActionFightSpellCastMessage::_spellLevelFunc(CustomDataInput *input) {
    this->spellLevel = input->readShort();
    if (this->spellLevel < 1 || this->spellLevel > 32767) {

    }
}

void GameActionFightSpellCastMessage::_portalsIdsFunc(CustomDataInput *input) {
    int _val = input->readShort();
    this->portalsIds.push_back(_val);
}
