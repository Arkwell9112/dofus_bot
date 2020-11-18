#include "PrismFightAttackerRemoveMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PrismFightAttackerRemoveMessage::deserialize(CustomDataInput *input) {
    this->_subAreaIdFunc(input);
    this->_fightIdFunc(input);
    this->_fighterToRemoveIdFunc(input);
}

void PrismFightAttackerRemoveMessage::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}

void PrismFightAttackerRemoveMessage::_fightIdFunc(CustomDataInput *input) {
    this->fightId = input->readVarUhShort();
    if (this->fightId < 0) {

    }
}

void PrismFightAttackerRemoveMessage::_fighterToRemoveIdFunc(CustomDataInput *input) {
    this->fighterToRemoveId = input->readVarUhLong();
    if (this->fighterToRemoveId < 0 || this->fighterToRemoveId > 9007199254740990) {

    }
}
