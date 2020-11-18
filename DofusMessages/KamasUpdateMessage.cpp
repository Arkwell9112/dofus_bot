#include "KamasUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void KamasUpdateMessage::deserialize(CustomDataInput *input) {
    this->_kamasTotalFunc(input);
}

void KamasUpdateMessage::_kamasTotalFunc(CustomDataInput *input) {
    this->kamasTotal = input->readVarUhLong();
    if (this->kamasTotal < 0 || this->kamasTotal > 9007199254740990) {

    }
}
