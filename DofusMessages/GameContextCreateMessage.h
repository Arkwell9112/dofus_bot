#ifndef GAMECONTEXTCREATEMESSAGE_H
#define GAMECONTEXTCREATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameContextCreateMessage : public DeserializeInterface {
public:
    unsigned int context = 1;

    void deserialize(CustomDataInput *input);

private:
    void _contextFunc(CustomDataInput *input);
};

#endif