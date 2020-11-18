#include "GameActionFightCastRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionFightCastRequestMessage::deserialize(CustomDataInput *input) {
    this->_spellIdFunc(input);
    this->_cellIdFunc(input);
}

void GameActionFightCastRequestMessage::_spellIdFunc(CustomDataInput *input) {
    this->spellId = input->readVarUhShort();
    if (this->spellId < 0) {

    }
}

void GameActionFightCastRequestMessage::_cellIdFunc(CustomDataInput *input) {
    this->cellId = input->readShort();
    if (this->cellId < -1 || this->cellId > 559) {

    }
}
