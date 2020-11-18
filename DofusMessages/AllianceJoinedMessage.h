#ifndef ALLIANCEJOINEDMESSAGE_H
#define ALLIANCEJOINEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/AllianceInformations.h"

#include <string>
#include <vector>

class AllianceJoinedMessage : public DeserializeInterface {
public:
    AllianceInformations allianceInfo;
    bool enabled = false;
    unsigned int leadingGuildId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _enabledFunc(CustomDataInput *input);

    void _leadingGuildIdFunc(CustomDataInput *input);
};

#endif