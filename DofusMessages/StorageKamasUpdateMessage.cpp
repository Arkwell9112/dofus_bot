#include "StorageKamasUpdateMessage.h"
#include "KamasUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void StorageKamasUpdateMessage::deserialize(CustomDataInput *input) {
    this->_kamasTotalFunc(input);
}

void StorageKamasUpdateMessage::_kamasTotalFunc(CustomDataInput *input) {
    this->kamasTotal = input->readVarUhLong();
    if (this->kamasTotal < 0 || this->kamasTotal > 9007199254740990) {

    }
}
