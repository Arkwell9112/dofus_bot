#ifndef CHATSERVERCOPYMESSAGE_H
#define CHATSERVERCOPYMESSAGE_H

#include "ChatAbstractServerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ChatServerCopyMessage : public ChatAbstractServerMessage {
public:
    double receiverId = 0;
    std::string receiverName;

    void deserialize(CustomDataInput *input);

private:
    void _receiverIdFunc(CustomDataInput *input);

    void _receiverNameFunc(CustomDataInput *input);
};

#endif