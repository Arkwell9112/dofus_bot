#ifndef CHATABSTRACTCLIENTMESSAGE_H
#define CHATABSTRACTCLIENTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ChatAbstractClientMessage : public DeserializeInterface {
public:
    std::string content;

    void deserialize(CustomDataInput *input);

private:
    void _contentFunc(CustomDataInput *input);
};

#endif