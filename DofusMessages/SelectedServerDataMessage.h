#ifndef SELECTEDSERVERDATAMESSAGE_H
#define SELECTEDSERVERDATAMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SelectedServerDataMessage : public DeserializeInterface {
public:
    unsigned int serverId = 0;
    std::string address;
    std::vector<unsigned int> ports;
    bool canCreateNewCharacter = false;
    std::vector<int> ticket;

    void deserialize(CustomDataInput *input);

private:
    void _serverIdFunc(CustomDataInput *input);

    void _addressFunc(CustomDataInput *input);

    void _portsFunc(CustomDataInput *input);

    void _canCreateNewCharacterFunc(CustomDataInput *input);

    void _ticketFunc(CustomDataInput *input);
};

#endif