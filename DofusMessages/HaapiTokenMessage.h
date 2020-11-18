#ifndef HAAPITOKENMESSAGE_H
#define HAAPITOKENMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HaapiTokenMessage : public DeserializeInterface {
public:
    std::string token;

    void deserialize(CustomDataInput *input);

private:
    void _tokenFunc(CustomDataInput *input);
};

#endif