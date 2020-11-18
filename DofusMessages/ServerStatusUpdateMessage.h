#ifndef SERVERSTATUSUPDATEMESSAGE_H
#define SERVERSTATUSUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameServerInformations.h"

#include <string>
#include <vector>

class ServerStatusUpdateMessage : public DeserializeInterface {
public:
    GameServerInformations server;

    void deserialize(CustomDataInput *input);

private:
};

#endif