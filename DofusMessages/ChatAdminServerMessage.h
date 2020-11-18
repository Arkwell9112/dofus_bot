#ifndef CHATADMINSERVERMESSAGE_H
#define CHATADMINSERVERMESSAGE_H

#include "ChatServerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ChatAdminServerMessage : public ChatServerMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif