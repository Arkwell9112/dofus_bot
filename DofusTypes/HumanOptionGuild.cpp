#include "HumanOptionGuild.h"
#include "HumanOption.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HumanOptionGuild::deserialize(CustomDataInput *input) {
    HumanOption::deserialize(input);
    this->guildInformations.deserialize(input);
}