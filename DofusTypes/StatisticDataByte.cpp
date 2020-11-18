#include "StatisticDataByte.h"
#include "StatisticData.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void StatisticDataByte::deserialize(CustomDataInput *input) {
    StatisticData::deserialize(input);
    this->_valueFunc(input);
}

void StatisticDataByte::_valueFunc(CustomDataInput *input) {
    this->value = input->readByte();
}
