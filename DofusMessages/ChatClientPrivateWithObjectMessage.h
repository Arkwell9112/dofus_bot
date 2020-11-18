#ifndef CHATCLIENTPRIVATEWITHOBJECTMESSAGE_H
#define CHATCLIENTPRIVATEWITHOBJECTMESSAGE_H

#include "ChatClientPrivateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ChatClientPrivateWithObjectMessage : public ChatClientPrivateMessage {
public:
    std::vector<ObjectItem> objects;

    void deserialize(CustomDataInput *input);

private:
};

#endif