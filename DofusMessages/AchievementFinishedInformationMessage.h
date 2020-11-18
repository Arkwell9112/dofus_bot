#ifndef ACHIEVEMENTFINISHEDINFORMATIONMESSAGE_H
#define ACHIEVEMENTFINISHEDINFORMATIONMESSAGE_H

#include "AchievementFinishedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Achievement.h"

#include <string>
#include <vector>

class AchievementFinishedInformationMessage : public AchievementFinishedMessage {
public:
    std::string name;
    double playerId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _nameFunc(CustomDataInput *input);

    void _playerIdFunc(CustomDataInput *input);
};

#endif