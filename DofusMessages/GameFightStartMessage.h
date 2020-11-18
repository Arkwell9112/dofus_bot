#ifndef GAMEFIGHTSTARTMESSAGE_H
#define GAMEFIGHTSTARTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Idol.h"

#include <string>
#include <vector>

class GameFightStartMessage : public DeserializeInterface {
public:
    std::vector<Idol> idols;

    void deserialize(CustomDataInput *input);

private:
};

#endif