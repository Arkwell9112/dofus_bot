#ifndef SERVERSLISTMESSAGE_H
#define SERVERSLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameServerInformations.h"

#include <string>
#include <vector>

class ServersListMessage : public DeserializeInterface {
public:
    std::vector<GameServerInformations> servers;
    unsigned int alreadyConnectedToServerId = 0;
    bool canCreateNewCharacter = false;

    void deserialize(CustomDataInput *input);

private:
    void _alreadyConnectedToServerIdFunc(CustomDataInput *input);

    void _canCreateNewCharacterFunc(CustomDataInput *input);
};

#endif