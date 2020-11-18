#ifndef REFRESHCHARACTERSTATSMESSAGE_H
#define REFRESHCHARACTERSTATSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameFightMinimalStats.h"

#include <string>
#include <vector>

class RefreshCharacterStatsMessage : public DeserializeInterface {
public:
    double fighterId = 0;
    GameFightMinimalStats stats;

    void deserialize(CustomDataInput *input);

private:
    void _fighterIdFunc(CustomDataInput *input);
};

#endif