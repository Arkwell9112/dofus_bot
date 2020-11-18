#ifndef PROTOCOLREQUIRED_H
#define PROTOCOLREQUIRED_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ProtocolRequired : public DeserializeInterface {
public:
    std::string version;

    void deserialize(CustomDataInput *input);

private:
    void _versionFunc(CustomDataInput *input);
};

#endif