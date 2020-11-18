#ifndef FRIENDSETWARNONLEVELGAINMESSAGE_H
#define FRIENDSETWARNONLEVELGAINMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FriendSetWarnOnLevelGainMessage : public DeserializeInterface {
public:
    bool enable = false;

    void deserialize(CustomDataInput *input);

private:
    void _enableFunc(CustomDataInput *input);
};

#endif