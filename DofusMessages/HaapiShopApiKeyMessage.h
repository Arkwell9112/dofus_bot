#ifndef HAAPISHOPAPIKEYMESSAGE_H
#define HAAPISHOPAPIKEYMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HaapiShopApiKeyMessage : public DeserializeInterface {
public:
    std::string token;

    void deserialize(CustomDataInput *input);

private:
    void _tokenFunc(CustomDataInput *input);
};

#endif