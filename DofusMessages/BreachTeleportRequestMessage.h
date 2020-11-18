#ifndef BREACHTELEPORTREQUESTMESSAGE_H
#define BREACHTELEPORTREQUESTMESSAGE_H

#include "TeleportRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BreachTeleportRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif