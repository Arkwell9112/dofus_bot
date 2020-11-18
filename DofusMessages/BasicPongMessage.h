#ifndef BASICPONGMESSAGE_H
#define BASICPONGMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BasicPongMessage : public DeserializeInterface {
public:
    bool quiet = false;

    void deserialize(CustomDataInput *input);

private:
    void _quietFunc(CustomDataInput *input);
};

#endif