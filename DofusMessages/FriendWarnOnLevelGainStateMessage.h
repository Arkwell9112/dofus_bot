#ifndef FRIENDWARNONLEVELGAINSTATEMESSAGE_H
#define FRIENDWARNONLEVELGAINSTATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FriendWarnOnLevelGainStateMessage : public DeserializeInterface {
public:
    bool enable = false;

    void deserialize(CustomDataInput *input);

private:
    void _enableFunc(CustomDataInput *input);
};

#endif