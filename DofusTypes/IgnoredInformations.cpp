#include "IgnoredInformations.h"
#include "AbstractContactInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void IgnoredInformations::deserialize(CustomDataInput *input) {
    AbstractContactInformations::deserialize(input);
}