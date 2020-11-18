#ifndef GAMEFIGHTREADYMESSAGE_H
#define GAMEFIGHTREADYMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightReadyMessage : public DeserializeInterface {
public:
    bool isReady = false;

    void deserialize(CustomDataInput *input);

private:
    void _isReadyFunc(CustomDataInput *input);
};

#endif