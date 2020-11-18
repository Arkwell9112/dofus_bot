#ifndef GAMEMAPMOVEMENTCONFIRMMESSAGE_H
#define GAMEMAPMOVEMENTCONFIRMMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameMapMovementConfirmMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif