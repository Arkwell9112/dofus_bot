#ifndef ALLIANCECREATIONVALIDMESSAGE_H
#define ALLIANCECREATIONVALIDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildEmblem.h"

#include <string>
#include <vector>

class AllianceCreationValidMessage : public DeserializeInterface {
public:
    std::string allianceName;
    std::string allianceTag;
    GuildEmblem allianceEmblem;

    void deserialize(CustomDataInput *input);

private:
    void _allianceNameFunc(CustomDataInput *input);

    void _allianceTagFunc(CustomDataInput *input);
};

#endif