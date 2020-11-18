#ifndef ALIGNMENTWAREFFORTDONATIONRESULTMESSAGE_H
#define ALIGNMENTWAREFFORTDONATIONRESULTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AlignmentWarEffortDonationResultMessage : public DeserializeInterface {
public:
    int result = 4;

    void deserialize(CustomDataInput *input);

private:
    void _resultFunc(CustomDataInput *input);
};

#endif