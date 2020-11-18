#ifndef GAMECONTEXTDESTROYMESSAGE_H
#define GAMECONTEXTDESTROYMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameContextDestroyMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif