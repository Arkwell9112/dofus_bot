#ifndef CHATCLIENTMULTIWITHOBJECTMESSAGE_H
#define CHATCLIENTMULTIWITHOBJECTMESSAGE_H

#include "ChatClientMultiMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ChatClientMultiWithObjectMessage : public ChatClientMultiMessage {
public:
    std::vector<ObjectItem> objects;

    void deserialize(CustomDataInput *input);

private:
};

#endif