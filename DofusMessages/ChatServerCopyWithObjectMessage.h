#ifndef CHATSERVERCOPYWITHOBJECTMESSAGE_H
#define CHATSERVERCOPYWITHOBJECTMESSAGE_H

#include "ChatServerCopyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ChatServerCopyWithObjectMessage : public ChatServerCopyMessage {
public:
    std::vector<ObjectItem> objects;

    void deserialize(CustomDataInput *input);

private:
};

#endif