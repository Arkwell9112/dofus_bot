#ifndef CHATCLIENTMULTIMESSAGE_H
#define CHATCLIENTMULTIMESSAGE_H

#include "ChatAbstractClientMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ChatClientMultiMessage : public ChatAbstractClientMessage {
public:
    unsigned int channel = 0;

    void deserialize(CustomDataInput *input);

private:
    void _channelFunc(CustomDataInput *input);
};

#endif