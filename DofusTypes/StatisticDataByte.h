#ifndef STATISTICDATABYTE_H
#define STATISTICDATABYTE_H

#include "StatisticData.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class StatisticDataByte : public StatisticData {
public:
    int value = 0;

    void deserialize(CustomDataInput *input);

private:
    void _valueFunc(CustomDataInput *input);
};

#endif