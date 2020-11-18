#ifndef TAXCOLLECTORWAITINGFORHELPINFORMATIONS_H
#define TAXCOLLECTORWAITINGFORHELPINFORMATIONS_H

#include "TaxCollectorComplementaryInformations.h"
#include "ProtectedEntityWaitingForHelpInfo.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TaxCollectorWaitingForHelpInformations : public TaxCollectorComplementaryInformations {
public:
    ProtectedEntityWaitingForHelpInfo waitingForHelpInfo;

    void deserialize(CustomDataInput *input);

private:
};

#endif