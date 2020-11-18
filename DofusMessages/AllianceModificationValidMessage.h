#ifndef ALLIANCEMODIFICATIONVALIDMESSAGE_H
#define ALLIANCEMODIFICATIONVALIDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildEmblem.h"

#include <string>
#include <vector>

class AllianceModificationValidMessage : public DeserializeInterface {
public:
    std::string allianceName;
    std::string allianceTag;
    GuildEmblem Alliancemblem;

    void deserialize(CustomDataInput *input);

private:
    void _allianceNameFunc(CustomDataInput *input);

    void _allianceTagFunc(CustomDataInput *input);
};

#endif