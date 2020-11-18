#ifndef ALLIANCEFACTSMESSAGE_H
#define ALLIANCEFACTSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildInAllianceInformations.h"

#include "../DofusTypes/AllianceInformations.h"

#include "../DofusTypes/AllianceFactSheetInformations.h"

#include <string>
#include <vector>

class AllianceFactsMessage : public DeserializeInterface {
public:
    AllianceFactSheetInformations infos;
    std::vector<GuildInAllianceInformations> guilds;
    std::vector<unsigned int> controlledSubareaIds;
    double leaderCharacterId = 0;
    std::string leaderCharacterName;

    void deserialize(CustomDataInput *input);

private:
    void _controlledSubareaIdsFunc(CustomDataInput *input);

    void _leaderCharacterIdFunc(CustomDataInput *input);

    void _leaderCharacterNameFunc(CustomDataInput *input);
};

#endif