#ifndef ACHIEVEMENTDETAILEDLISTMESSAGE_H
#define ACHIEVEMENTDETAILEDLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Achievement.h"

#include <string>
#include <vector>

class AchievementDetailedListMessage : public DeserializeInterface {
public:
    std::vector<Achievement> startedAchievements;
    std::vector<Achievement> finishedAchievements;

    void deserialize(CustomDataInput *input);

private:
};

#endif