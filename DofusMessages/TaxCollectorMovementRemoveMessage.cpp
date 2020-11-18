#include "TaxCollectorMovementRemoveMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/TaxCollectorMovement.h"

void TaxCollectorMovementRemoveMessage::deserialize(CustomDataInput *input) {
    this->_collectorIdFunc(input);
}

void TaxCollectorMovementRemoveMessage::_collectorIdFunc(CustomDataInput *input) {
    this->collectorId = input->readDouble();
    if (this->collectorId < 0 || this->collectorId > 9007199254740990) {

    }
}
