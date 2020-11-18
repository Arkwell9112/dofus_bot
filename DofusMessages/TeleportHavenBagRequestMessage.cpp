#include "TeleportHavenBagRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TeleportHavenBagRequestMessage::deserialize(CustomDataInput *input) {
    this->_guestIdFunc(input);
}

void TeleportHavenBagRequestMessage::_guestIdFunc(CustomDataInput *input) {
    this->guestId = input->readVarUhLong();
    if (this->guestId < 0 || this->guestId > 9007199254740990) {

    }
}
