#ifndef CHATSMILEYREQUESTMESSAGE_H
#define CHATSMILEYREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ChatSmileyRequestMessage : public DeserializeInterface {
public:
    unsigned int smileyId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _smileyIdFunc(CustomDataInput *input);
};

#endif