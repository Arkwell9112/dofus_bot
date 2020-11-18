#ifndef ALLIANCEBULLETINMESSAGE_H
#define ALLIANCEBULLETINMESSAGE_H

#include "BulletinMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AllianceBulletinMessage : public BulletinMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif