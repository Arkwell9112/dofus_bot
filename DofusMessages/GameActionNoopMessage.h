#ifndef GAMEACTIONNOOPMESSAGE_H
#define GAMEACTIONNOOPMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionNoopMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif