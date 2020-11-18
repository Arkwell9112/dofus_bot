#ifndef ALLIANCEMOTDSETREQUESTMESSAGE_H
#define ALLIANCEMOTDSETREQUESTMESSAGE_H

#include "SocialNoticeSetRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AllianceMotdSetRequestMessage : public SocialNoticeSetRequestMessage {
public:
    std::string content;

    void deserialize(CustomDataInput *input);

private:
    void _contentFunc(CustomDataInput *input);
};

#endif