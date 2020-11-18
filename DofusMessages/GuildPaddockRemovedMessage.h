#ifndef GUILDPADDOCKREMOVEDMESSAGE_H
#define GUILDPADDOCKREMOVEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildPaddockRemovedMessage : public DeserializeInterface {
public:
    double paddockId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _paddockIdFunc(CustomDataInput *input);
};

#endif