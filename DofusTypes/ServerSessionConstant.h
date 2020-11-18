#ifndef SERVERSESSIONCONSTANT_H
#define SERVERSESSIONCONSTANT_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ServerSessionConstant : public DeserializeInterface {
public:
    unsigned int id = 0;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);
};

#endif