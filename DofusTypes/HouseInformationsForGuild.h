#ifndef HOUSEINFORMATIONSFORGUILD_H
#define HOUSEINFORMATIONSFORGUILD_H

#include "HouseInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HouseInformationsForGuild : public HouseInformations {
public:
    unsigned int instanceId = 0;
    bool secondHand = false;
    std::string ownerName;
    int worldX = 0;
    int worldY = 0;
    double mapId = 0;
    unsigned int subAreaId = 0;
    std::vector<int> skillListIds;
    unsigned int guildshareParams = 0;

    void deserialize(CustomDataInput *input);

private:
    void _instanceIdFunc(CustomDataInput *input);

    void _secondHandFunc(CustomDataInput *input);

    void _ownerNameFunc(CustomDataInput *input);

    void _worldXFunc(CustomDataInput *input);

    void _worldYFunc(CustomDataInput *input);

    void _mapIdFunc(CustomDataInput *input);

    void _subAreaIdFunc(CustomDataInput *input);

    void _skillListIdsFunc(CustomDataInput *input);

    void _guildshareParamsFunc(CustomDataInput *input);
};

#endif