#ifndef ENABLEDCHANNELSMESSAGE_H
#define ENABLEDCHANNELSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class EnabledChannelsMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> channels;
    std::vector<unsigned int> disallowed;

    void deserialize(CustomDataInput *input);

private:
    void _channelsFunc(CustomDataInput *input);

    void _disallowedFunc(CustomDataInput *input);
};

#endif