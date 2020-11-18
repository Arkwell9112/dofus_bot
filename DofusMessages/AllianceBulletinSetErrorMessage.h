#ifndef ALLIANCEBULLETINSETERRORMESSAGE_H
#define ALLIANCEBULLETINSETERRORMESSAGE_H

#include "SocialNoticeSetErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AllianceBulletinSetErrorMessage : public SocialNoticeSetErrorMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif