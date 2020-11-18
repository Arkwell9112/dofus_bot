#ifndef PRISMINFORMATION_H
#define PRISMINFORMATION_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PrismInformation : public DeserializeInterface {
public:
    unsigned int typeId = 0;
    unsigned int state = 1;
    unsigned int nextVulnerabilityDate = 0;
    unsigned int placementDate = 0;
    unsigned int rewardTokenCount = 0;

    void deserialize(CustomDataInput *input);

private:
    void _typeIdFunc(CustomDataInput *input);

    void _stateFunc(CustomDataInput *input);

    void _nextVulnerabilityDateFunc(CustomDataInput *input);

    void _placementDateFunc(CustomDataInput *input);

    void _rewardTokenCountFunc(CustomDataInput *input);
};

#endif