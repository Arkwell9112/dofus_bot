#include "GuildInformations.h"
#include "GuildFactSheetInformations.h"
#include "AlliancedGuildFactSheetInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AlliancedGuildFactSheetInformations::deserialize(CustomDataInput *input) {
    GuildInformations::deserialize(input);
    this->allianceInfos.deserialize(input);
}