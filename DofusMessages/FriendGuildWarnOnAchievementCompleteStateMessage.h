#ifndef FRIENDGUILDWARNONACHIEVEMENTCOMPLETESTATEMESSAGE_H
#define FRIENDGUILDWARNONACHIEVEMENTCOMPLETESTATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Achievement.h"

#include <string>
#include <vector>

class FriendGuildWarnOnAchievementCompleteStateMessage : public DeserializeInterface {
public:
    bool enable = false;

    void deserialize(CustomDataInput *input);

private:
    void _enableFunc(CustomDataInput *input);
};

#endif