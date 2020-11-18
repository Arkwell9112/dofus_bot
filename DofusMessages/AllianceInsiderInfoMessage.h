#ifndef ALLIANCEINSIDERINFOMESSAGE_H
#define ALLIANCEINSIDERINFOMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PrismSubareaEmptyInfo.h"

#include "../DofusTypes/GuildInsiderFactSheetInformations.h"

#include "../DofusTypes/AllianceFactSheetInformations.h"

#include <string>
#include <vector>

class AllianceInsiderInfoMessage : public DeserializeInterface {
public:
    AllianceFactSheetInformations allianceInfos;
    std::vector<GuildInsiderFactSheetInformations> guilds;
    std::vector<PrismSubareaEmptyInfo> prisms;

    void deserialize(CustomDataInput *input);

private:
    void _prismsFunc(CustomDataInput *input);
};

#endif