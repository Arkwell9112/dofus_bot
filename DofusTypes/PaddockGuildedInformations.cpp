#include "PaddockGuildedInformations.h"
#include "PaddockBuyableInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PaddockGuildedInformations::deserialize(CustomDataInput *input) {
    PaddockBuyableInformations::deserialize(input);
    this->_desertedFunc(input);
    this->guildInfo.deserialize(input);
}

void PaddockGuildedInformations::_desertedFunc(CustomDataInput *input) {
    this->deserted = input->readBoolean();
}
