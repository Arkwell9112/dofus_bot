#include "MapRewardRateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MapRewardRateMessage::deserialize(CustomDataInput *input) {
    this->_mapRateFunc(input);
    this->_subAreaRateFunc(input);
    this->_totalRateFunc(input);
}

void MapRewardRateMessage::_mapRateFunc(CustomDataInput *input) {
    this->mapRate = input->readVarShort();
}

void MapRewardRateMessage::_subAreaRateFunc(CustomDataInput *input) {
    this->subAreaRate = input->readVarShort();
}

void MapRewardRateMessage::_totalRateFunc(CustomDataInput *input) {
    this->totalRate = input->readVarShort();
}
