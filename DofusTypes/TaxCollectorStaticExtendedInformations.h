#ifndef TAXCOLLECTORSTATICEXTENDEDINFORMATIONS_H
#define TAXCOLLECTORSTATICEXTENDEDINFORMATIONS_H

#include "TaxCollectorStaticInformations.h"
#include "AllianceInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TaxCollectorStaticExtendedInformations : public TaxCollectorStaticInformations {
public:
    AllianceInformations allianceIdentity;

    void deserialize(CustomDataInput *input);

private:
};

#endif