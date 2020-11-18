#include "BasicNamedAllianceInformations.h"
#include "AllianceInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceInformations::deserialize(CustomDataInput *input) {
    BasicNamedAllianceInformations::deserialize(input);
    this->allianceEmblem.deserialize(input);
}