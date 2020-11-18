#ifndef CHANNELENABLINGCHANGEMESSAGE_H
#define CHANNELENABLINGCHANGEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ChannelEnablingChangeMessage : public DeserializeInterface {
public:
    unsigned int channel = 0;
    bool enable = false;

    void deserialize(CustomDataInput *input);

private:
    void _channelFunc(CustomDataInput *input);

    void _enableFunc(CustomDataInput *input);
};

#endif