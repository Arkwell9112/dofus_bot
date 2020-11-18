#ifndef GAMEROLEPLAYARENASWITCHTOFIGHTSERVERMESSAGE_H
#define GAMEROLEPLAYARENASWITCHTOFIGHTSERVERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayArenaSwitchToFightServerMessage : public DeserializeInterface {
public:
    std::string address;
    std::vector<unsigned int> ports;
    std::vector<int> ticket;

    void deserialize(CustomDataInput *input);

private:
    void _addressFunc(CustomDataInput *input);

    void _portsFunc(CustomDataInput *input);

    void _ticketFunc(CustomDataInput *input);
};

#endif