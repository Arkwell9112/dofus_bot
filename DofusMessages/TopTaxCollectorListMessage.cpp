#include "TopTaxCollectorListMessage.h"
#include "TaxCollectorListMessage.h"
#include "AbstractTaxCollectorListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TopTaxCollectorListMessage::deserialize(CustomDataInput *input) {
    AbstractTaxCollectorListMessage::deserialize(input);
    this->_isDungeonFunc(input);
}

void TopTaxCollectorListMessage::_isDungeonFunc(CustomDataInput *input) {
    this->isDungeon = input->readBoolean();
}
