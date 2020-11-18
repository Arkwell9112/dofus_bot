#include "PrismInformation.h"
#include "AlliancePrismInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AlliancePrismInformation::deserialize(CustomDataInput *input) {
    PrismInformation::deserialize(input);
    this->alliance.deserialize(input);
}