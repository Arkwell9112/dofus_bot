#ifndef GAMECONTEXTQUITMESSAGE_H
#define GAMECONTEXTQUITMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameContextQuitMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif