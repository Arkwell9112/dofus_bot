#ifndef ANOMALYSUBAREAINFORMATION_H
#define ANOMALYSUBAREAINFORMATION_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AnomalySubareaInformation : public DeserializeInterface {
public:
    unsigned int subAreaId = 0;
    int rewardRate = 0;
    bool hasAnomaly = false;
    double anomalyClosingTime = 0;

    void deserialize(CustomDataInput *input);

private:
    void _subAreaIdFunc(CustomDataInput *input);

    void _rewardRateFunc(CustomDataInput *input);

    void _hasAnomalyFunc(CustomDataInput *input);

    void _anomalyClosingTimeFunc(CustomDataInput *input);
};

#endif