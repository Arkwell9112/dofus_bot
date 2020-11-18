#include "HumanOptionOrnament.h"
#include "HumanOption.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HumanOptionOrnament::deserialize(CustomDataInput *input) {
    HumanOption::deserialize(input);
    this->_ornamentIdFunc(input);
    this->_levelFunc(input);
    this->_leagueIdFunc(input);
    this->_ladderPositionFunc(input);
}

void HumanOptionOrnament::_ornamentIdFunc(CustomDataInput *input) {
    this->ornamentId = input->readVarUhShort();
    if (this->ornamentId < 0) {

    }
}

void HumanOptionOrnament::_levelFunc(CustomDataInput *input) {
    this->level = input->readVarUhShort();
    if (this->level < 0) {

    }
}

void HumanOptionOrnament::_leagueIdFunc(CustomDataInput *input) {
    this->leagueId = input->readVarShort();
}

void HumanOptionOrnament::_ladderPositionFunc(CustomDataInput *input) {
    this->ladderPosition = input->readInt();
}
