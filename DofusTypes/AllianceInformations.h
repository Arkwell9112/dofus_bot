#ifndef ALLIANCEINFORMATIONS_H
#define ALLIANCEINFORMATIONS_H

#include "GuildEmblem.h"
#include "BasicNamedAllianceInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AllianceInformations : public BasicNamedAllianceInformations {
public:
    GuildEmblem allianceEmblem;

    void deserialize(CustomDataInput *input);

private:
};

#endif