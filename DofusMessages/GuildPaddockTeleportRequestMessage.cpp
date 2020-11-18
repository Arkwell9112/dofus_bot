#include "TeleportRequestMessage.h"
#include "GuildPaddockTeleportRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildPaddockTeleportRequestMessage::deserialize(CustomDataInput *input) {
    this->_paddockIdFunc(input);
}

void GuildPaddockTeleportRequestMessage::_paddockIdFunc(CustomDataInput *input) {
    this->paddockId = input->readDouble();
    if (this->paddockId < 0 || this->paddockId > 9007199254740990) {

    }
}
