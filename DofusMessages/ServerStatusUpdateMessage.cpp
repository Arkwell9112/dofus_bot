#include "ServerStatusUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ServerStatusUpdateMessage::deserialize(CustomDataInput *input) {
    this->server.deserialize(input);
}