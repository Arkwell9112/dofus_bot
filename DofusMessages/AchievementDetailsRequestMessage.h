#ifndef ACHIEVEMENTDETAILSREQUESTMESSAGE_H
#define ACHIEVEMENTDETAILSREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Achievement.h"

#include <string>
#include <vector>

class AchievementDetailsRequestMessage : public DeserializeInterface {
public:
    unsigned int achievementId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _achievementIdFunc(CustomDataInput *input);
};

#endif