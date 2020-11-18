#include "ExchangeStartedWithStorageMessage.h"
#include "ExchangeStartedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeStartedWithStorageMessage::deserialize(CustomDataInput *input) {
    ExchangeStartedMessage::deserialize(input);
    this->_storageMaxSlotFunc(input);
}

void ExchangeStartedWithStorageMessage::_storageMaxSlotFunc(CustomDataInput *input) {
    this->storageMaxSlot = input->readVarUhInt();
    if (this->storageMaxSlot < 0) {

    }
}
