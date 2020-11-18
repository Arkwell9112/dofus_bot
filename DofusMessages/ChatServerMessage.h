#ifndef CHATSERVERMESSAGE_H
#define CHATSERVERMESSAGE_H

#include "ChatAbstractServerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ChatServerMessage : public ChatAbstractServerMessage {
public:
    double senderId = 0;
    std::string senderName;
    std::string prefix;
    unsigned int senderAccountId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _senderIdFunc(CustomDataInput *input);

    void _senderNameFunc(CustomDataInput *input);

    void _prefixFunc(CustomDataInput *input);

    void _senderAccountIdFunc(CustomDataInput *input);
};

#endif