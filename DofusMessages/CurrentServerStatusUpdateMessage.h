#ifndef CURRENTSERVERSTATUSUPDATEMESSAGE_H
#define CURRENTSERVERSTATUSUPDATEMESSAGE_H

#include "ServerStatusUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CurrentServerStatusUpdateMessage : public DeserializeInterface {
public:
    unsigned int status = 1;

    void deserialize(CustomDataInput *input);

private:
    void _statusFunc(CustomDataInput *input);
};

#endif