#ifndef SOCIALNOTICESETREQUESTMESSAGE_H
#define SOCIALNOTICESETREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SocialNoticeSetRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif