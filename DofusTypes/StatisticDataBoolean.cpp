#include "StatisticDataBoolean.h"
#include "StatisticData.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void StatisticDataBoolean::deserialize(CustomDataInput *input) {
    StatisticData::deserialize(input);
    this->_valueFunc(input);
}

void StatisticDataBoolean::_valueFunc(CustomDataInput *input) {
    this->value = input->readBoolean();
}
