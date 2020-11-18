#include "GuildPaddockRemovedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildPaddockRemovedMessage::deserialize(CustomDataInput *input) {
    this->_paddockIdFunc(input);
}

void GuildPaddockRemovedMessage::_paddockIdFunc(CustomDataInput *input) {
    this->paddockId = input->readDouble();
    if (this->paddockId < 0 || this->paddockId > 9007199254740990) {

    }
}
