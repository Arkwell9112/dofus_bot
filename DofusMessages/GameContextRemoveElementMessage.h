#ifndef GAMECONTEXTREMOVEELEMENTMESSAGE_H
#define GAMECONTEXTREMOVEELEMENTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameContextRemoveElementMessage : public DeserializeInterface {
public:
    double id = 0;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);
};

#endif