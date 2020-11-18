#ifndef ACHIEVEMENTREWARDSUCCESSMESSAGE_H
#define ACHIEVEMENTREWARDSUCCESSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Achievement.h"

#include <string>
#include <vector>

class AchievementRewardSuccessMessage : public DeserializeInterface {
public:
    int achievementId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _achievementIdFunc(CustomDataInput *input);
};

#endif