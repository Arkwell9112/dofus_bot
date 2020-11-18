#ifndef GUILDSPELLUPGRADEREQUESTMESSAGE_H
#define GUILDSPELLUPGRADEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildSpellUpgradeRequestMessage : public DeserializeInterface {
public:
    unsigned int spellId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _spellIdFunc(CustomDataInput *input);
};

#endif