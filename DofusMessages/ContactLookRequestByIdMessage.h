#ifndef CONTACTLOOKREQUESTBYIDMESSAGE_H
#define CONTACTLOOKREQUESTBYIDMESSAGE_H

#include "ContactLookRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ContactLookRequestByIdMessage : public ContactLookRequestMessage {
public:
    double playerId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _playerIdFunc(CustomDataInput *input);
};

#endif