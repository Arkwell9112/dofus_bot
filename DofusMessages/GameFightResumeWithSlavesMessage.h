#ifndef GAMEFIGHTRESUMEWITHSLAVESMESSAGE_H
#define GAMEFIGHTRESUMEWITHSLAVESMESSAGE_H

#include "GameFightResumeMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameFightResumeSlaveInfo.h"

#include <string>
#include <vector>

class GameFightResumeWithSlavesMessage : public GameFightResumeMessage {
public:
    std::vector<GameFightResumeSlaveInfo> slavesInfo;

    void deserialize(CustomDataInput *input);

private:
};

#endif