#ifndef GUILDINVITATIONSTATERECRUTERMESSAGE_H
#define GUILDINVITATIONSTATERECRUTERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildInvitationStateRecruterMessage : public DeserializeInterface {
public:
    std::string recrutedName;
    unsigned int invitationState = 0;

    void deserialize(CustomDataInput *input);

private:
    void _recrutedNameFunc(CustomDataInput *input);

    void _invitationStateFunc(CustomDataInput *input);
};

#endif