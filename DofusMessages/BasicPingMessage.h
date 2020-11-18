#ifndef BASICPINGMESSAGE_H
#define BASICPINGMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BasicPingMessage : public DeserializeInterface {
public:
    bool quiet = false;

    void deserialize(CustomDataInput *input);

private:
    void _quietFunc(CustomDataInput *input);
};

#endif