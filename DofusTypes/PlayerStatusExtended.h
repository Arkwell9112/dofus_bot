#ifndef PLAYERSTATUSEXTENDED_H
#define PLAYERSTATUSEXTENDED_H

#include "PlayerStatus.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PlayerStatusExtended : public PlayerStatus {
public:
    std::string message;

    void deserialize(CustomDataInput *input);

private:
    void _messageFunc(CustomDataInput *input);
};

#endif