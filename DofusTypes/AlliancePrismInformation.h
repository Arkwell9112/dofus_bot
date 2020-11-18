#ifndef ALLIANCEPRISMINFORMATION_H
#define ALLIANCEPRISMINFORMATION_H

#include "PrismInformation.h"
#include "AllianceInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AlliancePrismInformation : public PrismInformation {
public:
    AllianceInformations alliance;

    void deserialize(CustomDataInput *input);

private:
};

#endif