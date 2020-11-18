#ifndef ACHIEVEMENTDETAILEDLISTREQUESTMESSAGE_H
#define ACHIEVEMENTDETAILEDLISTREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Achievement.h"

#include <string>
#include <vector>

class AchievementDetailedListRequestMessage : public DeserializeInterface {
public:
    unsigned int categoryId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _categoryIdFunc(CustomDataInput *input);
};

#endif