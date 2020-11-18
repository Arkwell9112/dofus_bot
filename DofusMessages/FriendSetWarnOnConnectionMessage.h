#ifndef FRIENDSETWARNONCONNECTIONMESSAGE_H
#define FRIENDSETWARNONCONNECTIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FriendSetWarnOnConnectionMessage : public DeserializeInterface {
public:
    bool enable = false;

    void deserialize(CustomDataInput *input);

private:
    void _enableFunc(CustomDataInput *input);
};

#endif