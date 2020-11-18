#ifndef GAMEREFRESHMONSTERBOOSTSMESSAGE_H
#define GAMEREFRESHMONSTERBOOSTSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/MonsterBoosts.h"

#include <string>
#include <vector>

class GameRefreshMonsterBoostsMessage : public DeserializeInterface {
public:
    std::vector<MonsterBoosts> monsterBoosts;
    std::vector<MonsterBoosts> familyBoosts;

    void deserialize(CustomDataInput *input);

private:
};

#endif