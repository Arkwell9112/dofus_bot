#ifndef LOGINQUEUESTATUSMESSAGE_H
#define LOGINQUEUESTATUSMESSAGE_H

#include "QueueStatusMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class LoginQueueStatusMessage : public DeserializeInterface {
public:
    unsigned int position = 0;
    unsigned int total = 0;

    void deserialize(CustomDataInput *input);

private:
    void _positionFunc(CustomDataInput *input);

    void _totalFunc(CustomDataInput *input);
};

#endif