#ifndef ALLIANCEINVITATIONSTATERECRUTERMESSAGE_H
#define ALLIANCEINVITATIONSTATERECRUTERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AllianceInvitationStateRecruterMessage : public DeserializeInterface {
public:
    std::string recrutedName;
    unsigned int invitationState = 0;

    void deserialize(CustomDataInput *input);

private:
    void _recrutedNameFunc(CustomDataInput *input);

    void _invitationStateFunc(CustomDataInput *input);
};

#endif