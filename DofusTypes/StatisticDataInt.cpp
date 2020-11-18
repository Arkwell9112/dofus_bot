#include "StatisticDataInt.h"
#include "StatisticData.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void StatisticDataInt::deserialize(CustomDataInput *input) {
    StatisticData::deserialize(input);
    this->_valueFunc(input);
}

void StatisticDataInt::_valueFunc(CustomDataInput *input) {
    this->value = input->readInt();
}
