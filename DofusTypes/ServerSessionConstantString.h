#ifndef SERVERSESSIONCONSTANTSTRING_H
#define SERVERSESSIONCONSTANTSTRING_H

#include "ServerSessionConstant.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ServerSessionConstantString : public ServerSessionConstant {
public:
    std::string value;

    void deserialize(CustomDataInput *input);

private:
    void _valueFunc(CustomDataInput *input);
};

#endif