#ifndef GUILDMOTDSETREQUESTMESSAGE_H
#define GUILDMOTDSETREQUESTMESSAGE_H

#include "SocialNoticeSetRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildMotdSetRequestMessage : public SocialNoticeSetRequestMessage {
public:
    std::string content;

    void deserialize(CustomDataInput *input);

private:
    void _contentFunc(CustomDataInput *input);
};

#endif