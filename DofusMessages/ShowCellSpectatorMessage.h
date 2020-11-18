#ifndef SHOWCELLSPECTATORMESSAGE_H
#define SHOWCELLSPECTATORMESSAGE_H

#include "ShowCellMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ShowCellSpectatorMessage : public ShowCellMessage {
public:
    std::string playerName;

    void deserialize(CustomDataInput *input);

private:
    void _playerNameFunc(CustomDataInput *input);
};

#endif