#include "GameActionMarkedCell.h"
#include "GameActionMark.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionMarkedCell::deserialize(CustomDataInput *input) {
    this->_cellIdFunc(input);
    this->_zoneSizeFunc(input);
    this->_cellColorFunc(input);
    this->_cellsTypeFunc(input);
}

void GameActionMarkedCell::_cellIdFunc(CustomDataInput *input) {
    this->cellId = input->readVarUhShort();
    if (this->cellId < 0 || this->cellId > 559) {

    }
}

void GameActionMarkedCell::_zoneSizeFunc(CustomDataInput *input) {
    this->zoneSize = input->readByte();
}

void GameActionMarkedCell::_cellColorFunc(CustomDataInput *input) {
    this->cellColor = input->readInt();
}

void GameActionMarkedCell::_cellsTypeFunc(CustomDataInput *input) {
    this->cellsType = input->readByte();
}
