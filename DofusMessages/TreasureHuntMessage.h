#ifndef TREASUREHUNTMESSAGE_H
#define TREASUREHUNTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/TreasureHuntStep.h"

#include "../DofusTypes/TreasureHuntFlag.h"

#include <string>
#include <vector>

class TreasureHuntMessage : public DeserializeInterface {
public:
    unsigned int questType = 0;
    double startMapId = 0;
    std::vector<TreasureHuntStep> knownStepsList;
    unsigned int totalStepCount = 0;
    unsigned int checkPointCurrent = 0;
    unsigned int checkPointTotal = 0;
    int availableRetryCount = 0;
    std::vector<TreasureHuntFlag> flags;

    void deserialize(CustomDataInput *input);

private:
    void _questTypeFunc(CustomDataInput *input);

    void _startMapIdFunc(CustomDataInput *input);

    void _knownStepsListFunc(CustomDataInput *input);

    void _totalStepCountFunc(CustomDataInput *input);

    void _checkPointCurrentFunc(CustomDataInput *input);

    void _checkPointTotalFunc(CustomDataInput *input);

    void _availableRetryCountFunc(CustomDataInput *input);
};

#endif