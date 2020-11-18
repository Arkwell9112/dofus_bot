#ifndef HELLOCONNECTMESSAGE_H
#define HELLOCONNECTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HelloConnectMessage : public DeserializeInterface {
public:
    std::string salt;
    std::vector<int> key;

    void deserialize(CustomDataInput *input);

private:
    void _saltFunc(CustomDataInput *input);

    void _keyFunc(CustomDataInput *input);
};

#endif