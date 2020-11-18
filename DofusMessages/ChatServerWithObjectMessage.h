#ifndef CHATSERVERWITHOBJECTMESSAGE_H
#define CHATSERVERWITHOBJECTMESSAGE_H

#include "ChatServerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ChatServerWithObjectMessage : public ChatServerMessage {
public:
    std::vector<ObjectItem> objects;

    void deserialize(CustomDataInput *input);

private:
};

#endif