#ifndef LOCALIZEDCHATSMILEYMESSAGE_H
#define LOCALIZEDCHATSMILEYMESSAGE_H

#include "ChatSmileyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class LocalizedChatSmileyMessage : public ChatSmileyMessage {
public:
    unsigned int cellId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _cellIdFunc(CustomDataInput *input);
};

#endif