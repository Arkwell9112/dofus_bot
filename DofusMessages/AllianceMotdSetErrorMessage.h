#ifndef ALLIANCEMOTDSETERRORMESSAGE_H
#define ALLIANCEMOTDSETERRORMESSAGE_H

#include "SocialNoticeSetErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AllianceMotdSetErrorMessage : public SocialNoticeSetErrorMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif