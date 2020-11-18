#ifndef ALLIANCEINVITATIONSTATERECRUTEDMESSAGE_H
#define ALLIANCEINVITATIONSTATERECRUTEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AllianceInvitationStateRecrutedMessage : public DeserializeInterface {
public:
    unsigned int invitationState = 0;

    void deserialize(CustomDataInput *input);

private:
    void _invitationStateFunc(CustomDataInput *input);
};

#endif