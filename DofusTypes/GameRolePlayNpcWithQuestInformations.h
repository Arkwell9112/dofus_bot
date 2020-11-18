#ifndef GAMEROLEPLAYNPCWITHQUESTINFORMATIONS_H
#define GAMEROLEPLAYNPCWITHQUESTINFORMATIONS_H

#include "GameRolePlayNpcQuestFlag.h"
#include "GameRolePlayNpcInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayNpcWithQuestInformations : public GameRolePlayNpcInformations {
public:
    GameRolePlayNpcQuestFlag questFlag;

    void deserialize(CustomDataInput *input);

private:
};

#endif