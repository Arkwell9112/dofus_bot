#ifndef HAAPIAPIKEYMESSAGE_H
#define HAAPIAPIKEYMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HaapiApiKeyMessage : public DeserializeInterface {
public:
    std::string token;

    void deserialize(CustomDataInput *input);

private:
    void _tokenFunc(CustomDataInput *input);
};

#endif