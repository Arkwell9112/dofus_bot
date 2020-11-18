#ifndef GUILDBULLETINSETREQUESTMESSAGE_H
#define GUILDBULLETINSETREQUESTMESSAGE_H

#include "SocialNoticeSetRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildBulletinSetRequestMessage : public SocialNoticeSetRequestMessage {
public:
    std::string content;
    bool notifyMembers = false;

    void deserialize(CustomDataInput *input);

private:
    void _contentFunc(CustomDataInput *input);

    void _notifyMembersFunc(CustomDataInput *input);
};

#endif