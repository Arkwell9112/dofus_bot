#ifndef CHATABSTRACTSERVERMESSAGE_H
#define CHATABSTRACTSERVERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ChatAbstractServerMessage : public DeserializeInterface {
public:
    unsigned int channel = 0;
    std::string content;
    unsigned int timestamp = 0;
    std::string fingerprint;

    void deserialize(CustomDataInput *input);

private:
    void _channelFunc(CustomDataInput *input);

    void _contentFunc(CustomDataInput *input);

    void _timestampFunc(CustomDataInput *input);

    void _fingerprintFunc(CustomDataInput *input);
};

#endif