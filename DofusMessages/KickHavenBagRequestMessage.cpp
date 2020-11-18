#include "KickHavenBagRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void KickHavenBagRequestMessage::deserialize(CustomDataInput *input) {
    this->_guestIdFunc(input);
}

void KickHavenBagRequestMessage::_guestIdFunc(CustomDataInput *input) {
    this->guestId = input->readVarUhLong();
    if (this->guestId < 0 || this->guestId > 9007199254740990) {

    }
}
