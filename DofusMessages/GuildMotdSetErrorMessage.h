#ifndef GUILDMOTDSETERRORMESSAGE_H
#define GUILDMOTDSETERRORMESSAGE_H

#include "SocialNoticeSetErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildMotdSetErrorMessage : public SocialNoticeSetErrorMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif