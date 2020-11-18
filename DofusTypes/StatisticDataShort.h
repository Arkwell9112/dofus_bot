#ifndef STATISTICDATASHORT_H
#define STATISTICDATASHORT_H

#include "StatisticData.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class StatisticDataShort : public StatisticData {
public:
    int value = 0;

    void deserialize(CustomDataInput *input);

private:
    void _valueFunc(CustomDataInput *input);
};

#endif