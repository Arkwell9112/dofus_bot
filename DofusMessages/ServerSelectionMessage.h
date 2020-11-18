#ifndef SERVERSELECTIONMESSAGE_H
#define SERVERSELECTIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ServerSelectionMessage : public DeserializeInterface {
public:
    unsigned int serverId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _serverIdFunc(CustomDataInput *input);
};

#endif