#ifndef MAILSTATUSMESSAGE_H
#define MAILSTATUSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MailStatusMessage : public DeserializeInterface {
public:
    unsigned int unread = 0;
    unsigned int total = 0;

    void deserialize(CustomDataInput *input);

private:
    void _unreadFunc(CustomDataInput *input);

    void _totalFunc(CustomDataInput *input);
};

#endif