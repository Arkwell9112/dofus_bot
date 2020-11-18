#ifndef GAMECONTEXTCREATEERRORMESSAGE_H
#define GAMECONTEXTCREATEERRORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameContextCreateErrorMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif