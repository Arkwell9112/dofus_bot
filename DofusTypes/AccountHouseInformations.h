#ifndef ACCOUNTHOUSEINFORMATIONS_H
#define ACCOUNTHOUSEINFORMATIONS_H

#include "HouseInstanceInformations.h"
#include "HouseInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AccountHouseInformations : public HouseInformations {
public:
    HouseInstanceInformations houseInfos;
    int worldX = 0;
    int worldY = 0;
    double mapId = 0;
    unsigned int subAreaId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _worldXFunc(CustomDataInput *input);

    void _worldYFunc(CustomDataInput *input);

    void _mapIdFunc(CustomDataInput *input);

    void _subAreaIdFunc(CustomDataInput *input);
};

#endif