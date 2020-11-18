#ifndef GUILDINVITATIONMESSAGE_H
#define GUILDINVITATIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildInvitationMessage : public DeserializeInterface {
public:
    double targetId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _targetIdFunc(CustomDataInput *input);
};

#endif