#ifndef GAMEROLEPLAYARENASWITCHTOGAMESERVERMESSAGE_H
#define GAMEROLEPLAYARENASWITCHTOGAMESERVERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayArenaSwitchToGameServerMessage : public DeserializeInterface {
public:
    bool validToken = false;
    std::vector<int> ticket;
    int homeServerId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _validTokenFunc(CustomDataInput *input);

    void _ticketFunc(CustomDataInput *input);

    void _homeServerIdFunc(CustomDataInput *input);
};

#endif