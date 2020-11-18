#include "StatisticDataString.h"
#include "StatisticData.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void StatisticDataString::deserialize(CustomDataInput *input) {
    StatisticData::deserialize(input);
    this->_valueFunc(input);
}

void StatisticDataString::_valueFunc(CustomDataInput *input) {
    this->value = input->readUTF();
}
