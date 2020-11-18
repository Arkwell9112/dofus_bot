#ifndef TAXCOLLECTORATTACKEDRESULTMESSAGE_H
#define TAXCOLLECTORATTACKEDRESULTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/TaxCollectorBasicInformations.h"

#include "../DofusTypes/GuildInformations.h"

#include "../DofusTypes/BasicGuildInformations.h"

#include <string>
#include <vector>

class TaxCollectorAttackedResultMessage : public DeserializeInterface {
public:
    bool deadOrAlive = false;
    TaxCollectorBasicInformations basicInfos;
    BasicGuildInformations guild;

    void deserialize(CustomDataInput *input);

private:
    void _deadOrAliveFunc(CustomDataInput *input);
};

#endif