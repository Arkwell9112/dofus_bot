#ifndef ALLIANCEGUILDLEAVINGMESSAGE_H
#define ALLIANCEGUILDLEAVINGMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AllianceGuildLeavingMessage : public DeserializeInterface {
public:
    bool kicked = false;
    unsigned int guildId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _kickedFunc(CustomDataInput *input);

    void _guildIdFunc(CustomDataInput *input);
};

#endif