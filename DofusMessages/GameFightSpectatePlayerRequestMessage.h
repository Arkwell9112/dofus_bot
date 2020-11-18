#ifndef GAMEFIGHTSPECTATEPLAYERREQUESTMESSAGE_H
#define GAMEFIGHTSPECTATEPLAYERREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightSpectatePlayerRequestMessage : public DeserializeInterface {
public:
    double playerId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _playerIdFunc(CustomDataInput *input);
};

#endif