#include "TaxCollectorStaticInformations.h"
#include "TaxCollectorStaticExtendedInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TaxCollectorStaticExtendedInformations::deserialize(CustomDataInput *input) {
    TaxCollectorStaticInformations::deserialize(input);
    this->allianceIdentity.deserialize(input);
}