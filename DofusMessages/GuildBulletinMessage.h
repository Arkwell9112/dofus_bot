#ifndef GUILDBULLETINMESSAGE_H
#define GUILDBULLETINMESSAGE_H

#include "BulletinMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildBulletinMessage : public BulletinMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif