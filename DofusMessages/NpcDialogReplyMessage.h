#ifndef NPCDIALOGREPLYMESSAGE_H
#define NPCDIALOGREPLYMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class NpcDialogReplyMessage : public DeserializeInterface {
public:
    unsigned int replyId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _replyIdFunc(CustomDataInput *input);
};

#endif