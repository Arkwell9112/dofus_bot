#include "StatisticDataShort.h"
#include "StatisticData.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void StatisticDataShort::deserialize(CustomDataInput *input) {
    StatisticData::deserialize(input);
    this->_valueFunc(input);
}

void StatisticDataShort::_valueFunc(CustomDataInput *input) {
    this->value = input->readShort();
}
