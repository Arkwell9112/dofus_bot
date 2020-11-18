#ifndef CHATCLIENTPRIVATEMESSAGE_H
#define CHATCLIENTPRIVATEMESSAGE_H

#include "ChatAbstractClientMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ChatClientPrivateMessage : public ChatAbstractClientMessage {
public:
    std::string receiver;

    void deserialize(CustomDataInput *input);

private:
    void _receiverFunc(CustomDataInput *input);
};

#endif