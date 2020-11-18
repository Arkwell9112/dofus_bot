#ifndef CHANGEMAPMESSAGE_H
#define CHANGEMAPMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ChangeMapMessage : public DeserializeInterface {
public:
    double mapId = 0;
    bool autopilot = false;

    void deserialize(CustomDataInput *input);

private:
    void _mapIdFunc(CustomDataInput *input);

    void _autopilotFunc(CustomDataInput *input);
};

#endif