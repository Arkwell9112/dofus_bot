#ifndef SERVERSESSIONCONSTANTINTEGER_H
#define SERVERSESSIONCONSTANTINTEGER_H

#include "ServerSessionConstant.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ServerSessionConstantInteger : public ServerSessionConstant {
public:
    int value = 0;

    void deserialize(CustomDataInput *input);

private:
    void _valueFunc(CustomDataInput *input);
};

#endif