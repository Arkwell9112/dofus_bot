#ifndef BREACHINVITATIONREQUESTMESSAGE_H
#define BREACHINVITATIONREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BreachInvitationRequestMessage : public DeserializeInterface {
public:
    std::vector<double> guests;

    void deserialize(CustomDataInput *input);

private:
    void _guestsFunc(CustomDataInput *input);
};

#endif