#ifndef ACHIEVEMENTDETAILSMESSAGE_H
#define ACHIEVEMENTDETAILSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Achievement.h"

#include <string>
#include <vector>

class AchievementDetailsMessage : public DeserializeInterface {
public:
    Achievement achievement;

    void deserialize(CustomDataInput *input);

private:
};

#endif