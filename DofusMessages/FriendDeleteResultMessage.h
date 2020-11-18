#ifndef FRIENDDELETERESULTMESSAGE_H
#define FRIENDDELETERESULTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FriendDeleteResultMessage : public DeserializeInterface {
public:
    bool success = false;
    std::string name;

    void deserialize(CustomDataInput *input);

private:
    void _successFunc(CustomDataInput *input);

    void _nameFunc(CustomDataInput *input);
};

#endif