#ifndef EXCHANGECRAFTERJOBLEVELUPMESSAGE_H
#define EXCHANGECRAFTERJOBLEVELUPMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeCrafterJobLevelupMessage : public DeserializeInterface {
public:
    unsigned int crafterJobLevel = 0;

    void deserialize(CustomDataInput *input);

private:
    void _crafterJobLevelFunc(CustomDataInput *input);
};

#endif