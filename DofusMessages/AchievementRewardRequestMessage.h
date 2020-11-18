#ifndef ACHIEVEMENTREWARDREQUESTMESSAGE_H
#define ACHIEVEMENTREWARDREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Achievement.h"

#include <string>
#include <vector>

class AchievementRewardRequestMessage : public DeserializeInterface {
public:
    int achievementId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _achievementIdFunc(CustomDataInput *input);
};

#endif