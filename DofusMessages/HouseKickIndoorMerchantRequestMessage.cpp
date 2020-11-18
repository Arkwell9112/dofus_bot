#include "HouseKickIndoorMerchantRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HouseKickIndoorMerchantRequestMessage::deserialize(CustomDataInput *input) {
    this->_cellIdFunc(input);
}

void HouseKickIndoorMerchantRequestMessage::_cellIdFunc(CustomDataInput *input) {
    this->cellId = input->readVarUhShort();
    if (this->cellId < 0 || this->cellId > 559) {

    }
}
