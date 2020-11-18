#ifndef GAMEROLEPLAYSHOWCHALLENGEMESSAGE_H
#define GAMEROLEPLAYSHOWCHALLENGEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/FightCommonInformations.h"

#include <string>
#include <vector>

class GameRolePlayShowChallengeMessage : public DeserializeInterface {
public:
    FightCommonInformations commonsInfos;

    void deserialize(CustomDataInput *input);

private:
};

#endif