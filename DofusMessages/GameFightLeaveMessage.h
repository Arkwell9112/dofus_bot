#ifndef GAMEFIGHTLEAVEMESSAGE_H
#define GAMEFIGHTLEAVEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightLeaveMessage : public DeserializeInterface {
public:
    double charId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _charIdFunc(CustomDataInput *input);
};

#endif