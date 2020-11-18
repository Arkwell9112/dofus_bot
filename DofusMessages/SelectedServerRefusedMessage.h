#ifndef SELECTEDSERVERREFUSEDMESSAGE_H
#define SELECTEDSERVERREFUSEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SelectedServerRefusedMessage : public DeserializeInterface {
public:
    unsigned int serverId = 0;
    unsigned int error = 1;
    unsigned int serverStatus = 1;

    void deserialize(CustomDataInput *input);

private:
    void _serverIdFunc(CustomDataInput *input);

    void _errorFunc(CustomDataInput *input);

    void _serverStatusFunc(CustomDataInput *input);
};

#endif