#ifndef STATISTICDATA_H
#define STATISTICDATA_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class StatisticData : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif