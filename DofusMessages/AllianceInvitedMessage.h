#ifndef ALLIANCEINVITEDMESSAGE_H
#define ALLIANCEINVITEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/BasicNamedAllianceInformations.h"

#include "../DofusTypes/AllianceInformations.h"

#include <string>
#include <vector>

class AllianceInvitedMessage : public DeserializeInterface {
public:
    double recruterId = 0;
    std::string recruterName;
    BasicNamedAllianceInformations allianceInfo;

    void deserialize(CustomDataInput *input);

private:
    void _recruterIdFunc(CustomDataInput *input);

    void _recruterNameFunc(CustomDataInput *input);
};

#endif