#ifndef CLIENTYOUAREDRUNKMESSAGE_H
#define CLIENTYOUAREDRUNKMESSAGE_H

#include "DebugInClientMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ClientYouAreDrunkMessage : public DebugInClientMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif