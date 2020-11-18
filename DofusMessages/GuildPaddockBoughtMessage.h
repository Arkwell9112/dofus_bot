#ifndef GUILDPADDOCKBOUGHTMESSAGE_H
#define GUILDPADDOCKBOUGHTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PaddockContentInformations.h"

#include <string>
#include <vector>

class GuildPaddockBoughtMessage : public DeserializeInterface {
public:
    PaddockContentInformations paddockInfo;

    void deserialize(CustomDataInput *input);

private:
};

#endif