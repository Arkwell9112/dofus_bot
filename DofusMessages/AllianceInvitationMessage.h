#ifndef ALLIANCEINVITATIONMESSAGE_H
#define ALLIANCEINVITATIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AllianceInvitationMessage : public DeserializeInterface {
public:
    double targetId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _targetIdFunc(CustomDataInput *input);
};

#endif