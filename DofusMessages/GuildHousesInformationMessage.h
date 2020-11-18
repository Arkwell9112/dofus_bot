#ifndef GUILDHOUSESINFORMATIONMESSAGE_H
#define GUILDHOUSESINFORMATIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/HouseInformationsForGuild.h"

#include "../DofusTypes/HouseInformations.h"

#include <string>
#include <vector>

class GuildHousesInformationMessage : public DeserializeInterface {
public:
    std::vector<HouseInformationsForGuild> housesInformations;

    void deserialize(CustomDataInput *input);

private:
};

#endif