#include "PrismFightDefenderLeaveMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PrismFightDefenderLeaveMessage::deserialize(CustomDataInput *input) {
    this->_subAreaIdFunc(input);
    this->_fightIdFunc(input);
    this->_fighterToRemoveIdFunc(input);
}

void PrismFightDefenderLeaveMessage::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}

void PrismFightDefenderLeaveMessage::_fightIdFunc(CustomDataInput *input) {
    this->fightId = input->readVarUhShort();
    if (this->fightId < 0) {

    }
}

void PrismFightDefenderLeaveMessage::_fighterToRemoveIdFunc(CustomDataInput *input) {
    this->fighterToRemoveId = input->readVarUhLong();
    if (this->fighterToRemoveId < 0 || this->fighterToRemoveId > 9007199254740990) {

    }
}
