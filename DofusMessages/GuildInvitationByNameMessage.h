#ifndef GUILDINVITATIONBYNAMEMESSAGE_H
#define GUILDINVITATIONBYNAMEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildInvitationByNameMessage : public DeserializeInterface {
public:
    std::string name;

    void deserialize(CustomDataInput *input);

private:
    void _nameFunc(CustomDataInput *input);
};

#endif