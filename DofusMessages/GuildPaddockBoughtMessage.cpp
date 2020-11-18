#include "GuildPaddockBoughtMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildPaddockBoughtMessage::deserialize(CustomDataInput *input) {
    this->paddockInfo.deserialize(input);
}