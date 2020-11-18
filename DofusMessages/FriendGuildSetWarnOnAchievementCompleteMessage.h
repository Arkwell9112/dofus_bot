#ifndef FRIENDGUILDSETWARNONACHIEVEMENTCOMPLETEMESSAGE_H
#define FRIENDGUILDSETWARNONACHIEVEMENTCOMPLETEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Achievement.h"

#include <string>
#include <vector>

class FriendGuildSetWarnOnAchievementCompleteMessage : public DeserializeInterface {
public:
    bool enable = false;

    void deserialize(CustomDataInput *input);

private:
    void _enableFunc(CustomDataInput *input);
};

#endif