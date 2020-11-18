#ifndef CLIENTKEYMESSAGE_H
#define CLIENTKEYMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ClientKeyMessage : public DeserializeInterface {
public:
    std::string key;

    void deserialize(CustomDataInput *input);

private:
    void _keyFunc(CustomDataInput *input);
};

#endif