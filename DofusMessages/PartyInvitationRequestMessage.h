#ifndef PARTYINVITATIONREQUESTMESSAGE_H
#define PARTYINVITATIONREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyInvitationRequestMessage : public DeserializeInterface {
public:
    std::string name;

    void deserialize(CustomDataInput *input);

private:
    void _nameFunc(CustomDataInput *input);
};

#endif