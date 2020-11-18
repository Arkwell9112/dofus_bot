#ifndef GUILDHOUSEUPDATEINFORMATIONMESSAGE_H
#define GUILDHOUSEUPDATEINFORMATIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/HouseInformationsForGuild.h"

#include "../DofusTypes/HouseInformations.h"

#include <string>
#include <vector>

class GuildHouseUpdateInformationMessage : public DeserializeInterface {
public:
    HouseInformationsForGuild housesInformations;

    void deserialize(CustomDataInput *input);

private:
};

#endif