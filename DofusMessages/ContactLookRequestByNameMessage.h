#ifndef CONTACTLOOKREQUESTBYNAMEMESSAGE_H
#define CONTACTLOOKREQUESTBYNAMEMESSAGE_H

#include "ContactLookRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ContactLookRequestByNameMessage : public ContactLookRequestMessage {
public:
    std::string playerName;

    void deserialize(CustomDataInput *input);

private:
    void _playerNameFunc(CustomDataInput *input);
};

#endif