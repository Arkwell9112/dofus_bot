#ifndef NEWMAILMESSAGE_H
#define NEWMAILMESSAGE_H

#include "MailStatusMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class NewMailMessage : public MailStatusMessage {
public:
    std::vector<unsigned int> sendersAccountId;

    void deserialize(CustomDataInput *input);

private:
    void _sendersAccountIdFunc(CustomDataInput *input);
};

#endif