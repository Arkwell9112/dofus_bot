#ifndef SERVERSESSIONCONSTANTLONG_H
#define SERVERSESSIONCONSTANTLONG_H

#include "ServerSessionConstant.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ServerSessionConstantLong : public ServerSessionConstant {
public:
    double value = 0;

    void deserialize(CustomDataInput *input);

private:
    void _valueFunc(CustomDataInput *input);
};

#endif