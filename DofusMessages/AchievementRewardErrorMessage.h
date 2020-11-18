#ifndef ACHIEVEMENTREWARDERRORMESSAGE_H
#define ACHIEVEMENTREWARDERRORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Achievement.h"

#include <string>
#include <vector>

class AchievementRewardErrorMessage : public DeserializeInterface {
public:
    int achievementId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _achievementIdFunc(CustomDataInput *input);
};

#endif