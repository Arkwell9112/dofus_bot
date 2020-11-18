#ifndef ALIGNMENTWAREFFORTDONATEREQUESTMESSAGE_H
#define ALIGNMENTWAREFFORTDONATEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AlignmentWarEffortDonateRequestMessage : public DeserializeInterface {
public:
    double donation = 0;

    void deserialize(CustomDataInput *input);

private:
    void _donationFunc(CustomDataInput *input);
};

#endif