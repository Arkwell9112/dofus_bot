#ifndef GUILDBULLETINSETERRORMESSAGE_H
#define GUILDBULLETINSETERRORMESSAGE_H

#include "SocialNoticeSetErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildBulletinSetErrorMessage : public SocialNoticeSetErrorMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif