#ifndef FRIENDSTATUSSHARESTATEMESSAGE_H
#define FRIENDSTATUSSHARESTATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FriendStatusShareStateMessage : public DeserializeInterface {
public:
    bool share = false;

    void deserialize(CustomDataInput *input);

private:
    void _shareFunc(CustomDataInput *input);
};

#endif