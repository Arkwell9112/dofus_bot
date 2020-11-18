#ifndef AUTHENTICATIONTICKETREFUSEDMESSAGE_H
#define AUTHENTICATIONTICKETREFUSEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AuthenticationTicketRefusedMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif