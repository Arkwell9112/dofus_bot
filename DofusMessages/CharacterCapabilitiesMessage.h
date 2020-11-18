#ifndef CHARACTERCAPABILITIESMESSAGE_H
#define CHARACTERCAPABILITIESMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterCapabilitiesMessage : public DeserializeInterface {
public:
    unsigned int guildEmblemSymbolCategories = 0;

    void deserialize(CustomDataInput *input);

private:
    void _guildEmblemSymbolCategoriesFunc(CustomDataInput *input);
};

#endif