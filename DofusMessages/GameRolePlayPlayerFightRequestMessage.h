#ifndef GAMEROLEPLAYPLAYERFIGHTREQUESTMESSAGE_H
#define GAMEROLEPLAYPLAYERFIGHTREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayPlayerFightRequestMessage : public DeserializeInterface {
public:
    double targetId = 0;
    int targetCellId = 0;
    bool friendly = false;

    void deserialize(CustomDataInput *input);

private:
    void _targetIdFunc(CustomDataInput *input);

    void _targetCellIdFunc(CustomDataInput *input);

    void _friendlyFunc(CustomDataInput *input);
};

#endif