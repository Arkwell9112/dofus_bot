#include "GuildGetInformationsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildGetInformationsMessage::deserialize(CustomDataInput *input) {
    this->_infoTypeFunc(input);
}

void GuildGetInformationsMessage::_infoTypeFunc(CustomDataInput *input) {
    this->infoType = input->readByte();
    if (this->infoType < 0) {

    }
}
