#ifndef GAMEFIGHTHUMANREADYSTATEMESSAGE_H
#define GAMEFIGHTHUMANREADYSTATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightHumanReadyStateMessage : public DeserializeInterface {
public:
    double characterId = 0;
    bool isReady = false;

    void deserialize(CustomDataInput *input);

private:
    void _characterIdFunc(CustomDataInput *input);

    void _isReadyFunc(CustomDataInput *input);
};

#endif