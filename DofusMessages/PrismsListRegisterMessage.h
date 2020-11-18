#ifndef PRISMSLISTREGISTERMESSAGE_H
#define PRISMSLISTREGISTERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PrismsListRegisterMessage : public DeserializeInterface {
public:
    unsigned int listen = 0;

    void deserialize(CustomDataInput *input);

private:
    void _listenFunc(CustomDataInput *input);
};

#endif