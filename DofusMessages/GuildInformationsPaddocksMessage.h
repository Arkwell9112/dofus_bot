#ifndef GUILDINFORMATIONSPADDOCKSMESSAGE_H
#define GUILDINFORMATIONSPADDOCKSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PaddockContentInformations.h"

#include "../DofusTypes/GuildInformations.h"

#include <string>
#include <vector>

class GuildInformationsPaddocksMessage : public DeserializeInterface {
public:
    unsigned int nbPaddockMax = 0;
    std::vector<PaddockContentInformations> paddocksInformations;

    void deserialize(CustomDataInput *input);

private:
    void _nbPaddockMaxFunc(CustomDataInput *input);
};

#endif