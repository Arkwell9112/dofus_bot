#ifndef HOUSEINFORMATIONSINSIDE_H
#define HOUSEINFORMATIONSINSIDE_H

#include "HouseInstanceInformations.h"
#include "HouseInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HouseInformationsInside : public HouseInformations {
public:
    HouseInstanceInformations houseInfos;
    int worldX = 0;
    int worldY = 0;

    void deserialize(CustomDataInput *input);

private:
    void _worldXFunc(CustomDataInput *input);

    void _worldYFunc(CustomDataInput *input);
};

#endif