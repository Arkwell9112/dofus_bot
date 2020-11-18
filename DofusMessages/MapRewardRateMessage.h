#ifndef MAPREWARDRATEMESSAGE_H
#define MAPREWARDRATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MapRewardRateMessage : public DeserializeInterface {
public:
    int mapRate = 0;
    int subAreaRate = 0;
    int totalRate = 0;

    void deserialize(CustomDataInput *input);

private:
    void _mapRateFunc(CustomDataInput *input);

    void _subAreaRateFunc(CustomDataInput *input);

    void _totalRateFunc(CustomDataInput *input);
};

#endif