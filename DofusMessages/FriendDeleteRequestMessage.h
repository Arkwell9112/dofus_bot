#ifndef FRIENDDELETEREQUESTMESSAGE_H
#define FRIENDDELETEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FriendDeleteRequestMessage : public DeserializeInterface {
public:
    unsigned int accountId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _accountIdFunc(CustomDataInput *input);
};

#endif