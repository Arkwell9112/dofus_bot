#ifndef ALLIANCEMODIFICATIONEMBLEMVALIDMESSAGE_H
#define ALLIANCEMODIFICATIONEMBLEMVALIDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildEmblem.h"

#include <string>
#include <vector>

class AllianceModificationEmblemValidMessage : public DeserializeInterface {
public:
    GuildEmblem Alliancemblem;

    void deserialize(CustomDataInput *input);

private:
};

#endif