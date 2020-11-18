#ifndef GUILDCHARACSUPGRADEREQUESTMESSAGE_H
#define GUILDCHARACSUPGRADEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildCharacsUpgradeRequestMessage : public DeserializeInterface {
public:
    unsigned int charaTypeTarget = 0;

    void deserialize(CustomDataInput *input);

private:
    void _charaTypeTargetFunc(CustomDataInput *input);
};

#endif