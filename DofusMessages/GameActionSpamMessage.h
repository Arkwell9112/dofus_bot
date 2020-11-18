#ifndef GAMEACTIONSPAMMESSAGE_H
#define GAMEACTIONSPAMMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionSpamMessage : public DeserializeInterface {
public:
    std::vector<int> cells;

    void deserialize(CustomDataInput *input);

private:
    void _cellsFunc(CustomDataInput *input);
};

#endif