#ifndef FRIENDWARNONCONNECTIONSTATEMESSAGE_H
#define FRIENDWARNONCONNECTIONSTATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FriendWarnOnConnectionStateMessage : public DeserializeInterface {
public:
    bool enable = false;

    void deserialize(CustomDataInput *input);

private:
    void _enableFunc(CustomDataInput *input);
};

#endif