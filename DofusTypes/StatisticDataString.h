#ifndef STATISTICDATASTRING_H
#define STATISTICDATASTRING_H

#include "StatisticData.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class StatisticDataString : public StatisticData {
public:
    std::string value;

    void deserialize(CustomDataInput *input);

private:
    void _valueFunc(CustomDataInput *input);
};

#endif