#ifndef RELOGINTOKENSTATUSMESSAGE_H
#define RELOGINTOKENSTATUSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ReloginTokenStatusMessage : public DeserializeInterface {
public:
    bool validToken = false;
    std::vector<int> ticket;

    void deserialize(CustomDataInput *input);

private:
    void _validTokenFunc(CustomDataInput *input);

    void _ticketFunc(CustomDataInput *input);
};

#endif