#ifndef GAMEROLEPLAYPLAYERLIFESTATUSMESSAGE_H
#define GAMEROLEPLAYPLAYERLIFESTATUSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayPlayerLifeStatusMessage : public DeserializeInterface {
public:
    unsigned int state = 0;
    double phenixMapId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _stateFunc(CustomDataInput *input);

    void _phenixMapIdFunc(CustomDataInput *input);
};

#endif