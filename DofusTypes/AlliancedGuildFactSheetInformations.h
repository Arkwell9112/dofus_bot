#ifndef ALLIANCEDGUILDFACTSHEETINFORMATIONS_H
#define ALLIANCEDGUILDFACTSHEETINFORMATIONS_H

#include "GuildInformations.h"
#include "GuildFactSheetInformations.h"
#include "BasicNamedAllianceInformations.h"
#include "AllianceInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AlliancedGuildFactSheetInformations : public GuildInformations {
public:
    BasicNamedAllianceInformations allianceInfos;

    void deserialize(CustomDataInput *input);

private:
};

#endif