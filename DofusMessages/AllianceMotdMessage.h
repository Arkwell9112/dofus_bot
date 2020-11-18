#ifndef ALLIANCEMOTDMESSAGE_H
#define ALLIANCEMOTDMESSAGE_H

#include "SocialNoticeMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AllianceMotdMessage : public SocialNoticeMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif