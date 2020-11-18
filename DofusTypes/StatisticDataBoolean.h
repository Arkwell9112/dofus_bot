#ifndef STATISTICDATABOOLEAN_H
#define STATISTICDATABOOLEAN_H

#include "StatisticData.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class StatisticDataBoolean : public StatisticData {
public:
    bool value = false;

    void deserialize(CustomDataInput *input);

private:
    void _valueFunc(CustomDataInput *input);
};

#endif