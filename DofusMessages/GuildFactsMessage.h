#ifndef GUILDFACTSMESSAGE_H
#define GUILDFACTSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildFactSheetInformations.h"

#include "../DofusTypes/CharacterMinimalGuildPublicInformations.h"

#include <string>
#include <vector>

class GuildFactsMessage : public DeserializeInterface {
public:
    GuildFactSheetInformations infos;
    unsigned int creationDate = 0;
    unsigned int nbTaxCollectors = 0;
    std::vector<CharacterMinimalGuildPublicInformations> members;

    void deserialize(CustomDataInput *input);

private:
    void _creationDateFunc(CustomDataInput *input);

    void _nbTaxCollectorsFunc(CustomDataInput *input);
};

#endif