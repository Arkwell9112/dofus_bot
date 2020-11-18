#include "GuildHouseUpdateInformationMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildHouseUpdateInformationMessage::deserialize(CustomDataInput *input) {
    this->housesInformations.deserialize(input);
}