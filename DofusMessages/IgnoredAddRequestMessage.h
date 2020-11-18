#ifndef IGNOREDADDREQUESTMESSAGE_H
#define IGNOREDADDREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class IgnoredAddRequestMessage : public DeserializeInterface {
public:
    std::string name;
    bool session = false;

    void deserialize(CustomDataInput *input);

private:
    void _nameFunc(CustomDataInput *input);

    void _sessionFunc(CustomDataInput *input);
};

#endif