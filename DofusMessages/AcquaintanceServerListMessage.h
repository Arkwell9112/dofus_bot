#ifndef ACQUAINTANCESERVERLISTMESSAGE_H
#define ACQUAINTANCESERVERLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AcquaintanceServerListMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> servers;

    void deserialize(CustomDataInput *input);

private:
    void _serversFunc(CustomDataInput *input);
};

#endif