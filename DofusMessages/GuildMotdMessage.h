#ifndef GUILDMOTDMESSAGE_H
#define GUILDMOTDMESSAGE_H

#include "SocialNoticeMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildMotdMessage : public SocialNoticeMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif