#ifndef GUILDMODIFICATIONSTARTEDMESSAGE_H
#define GUILDMODIFICATIONSTARTEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildModificationStartedMessage : public DeserializeInterface {
public:
    bool canChangeName = false;
    bool canChangeEmblem = false;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);
};

#endif