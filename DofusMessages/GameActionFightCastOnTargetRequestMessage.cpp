#include "GameActionFightCastOnTargetRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionFightCastOnTargetRequestMessage::deserialize(CustomDataInput *input) {
    this->_spellIdFunc(input);
    this->_targetIdFunc(input);
}

void GameActionFightCastOnTargetRequestMessage::_spellIdFunc(CustomDataInput *input) {
    this->spellId = input->readVarUhShort();
    if (this->spellId < 0) {

    }
}

void GameActionFightCastOnTargetRequestMessage::_targetIdFunc(CustomDataInput *input) {
    this->targetId = input->readDouble();
    if (this->targetId < -9007199254740990 || this->targetId > 9007199254740990) {

    }
}
