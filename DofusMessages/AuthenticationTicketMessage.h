#ifndef AUTHENTICATIONTICKETMESSAGE_H
#define AUTHENTICATIONTICKETMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AuthenticationTicketMessage : public DeserializeInterface {
public:
    std::string lang;
    std::string ticket;

    void deserialize(CustomDataInput *input);

private:
    void _langFunc(CustomDataInput *input);

    void _ticketFunc(CustomDataInput *input);
};

#endif