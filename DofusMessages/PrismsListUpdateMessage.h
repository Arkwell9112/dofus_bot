#ifndef PRISMSLISTUPDATEMESSAGE_H
#define PRISMSLISTUPDATEMESSAGE_H

#include "PrismsListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PrismsListUpdateMessage : public PrismsListMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif