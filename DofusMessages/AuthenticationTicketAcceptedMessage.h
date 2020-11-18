#ifndef AUTHENTICATIONTICKETACCEPTEDMESSAGE_H
#define AUTHENTICATIONTICKETACCEPTEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AuthenticationTicketAcceptedMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif