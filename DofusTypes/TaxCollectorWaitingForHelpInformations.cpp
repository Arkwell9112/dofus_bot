#include "TaxCollectorWaitingForHelpInformations.h"
#include "TaxCollectorComplementaryInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TaxCollectorWaitingForHelpInformations::deserialize(CustomDataInput *input) {
    TaxCollectorComplementaryInformations::deserialize(input);
    this->waitingForHelpInfo.deserialize(input);
}