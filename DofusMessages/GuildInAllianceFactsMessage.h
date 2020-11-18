#ifndef GUILDINALLIANCEFACTSMESSAGE_H
#define GUILDINALLIANCEFACTSMESSAGE_H

#include "GuildFactsMessage.h"
#include "AllianceFactsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/BasicNamedAllianceInformations.h"

#include "../DofusTypes/AllianceInformations.h"

#include <string>
#include <vector>

class GuildInAllianceFactsMessage : public GuildFactsMessage {
public:
    BasicNamedAllianceInformations allianceInfos;

    void deserialize(CustomDataInput *input);

private:
};

#endif