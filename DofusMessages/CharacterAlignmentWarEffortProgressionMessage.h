#ifndef CHARACTERALIGNMENTWAREFFORTPROGRESSIONMESSAGE_H
#define CHARACTERALIGNMENTWAREFFORTPROGRESSIONMESSAGE_H

#include "AlignmentWarEffortProgressionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterAlignmentWarEffortProgressionMessage : public DeserializeInterface {
public:
    double alignmentWarEffortDailyLimit = 0;
    double alignmentWarEffortDailyDonation = 0;
    double alignmentWarEffortPersonalDonation = 0;

    void deserialize(CustomDataInput *input);

private:
    void _alignmentWarEffortDailyLimitFunc(CustomDataInput *input);

    void _alignmentWarEffortDailyDonationFunc(CustomDataInput *input);

    void _alignmentWarEffortPersonalDonationFunc(CustomDataInput *input);
};

#endif