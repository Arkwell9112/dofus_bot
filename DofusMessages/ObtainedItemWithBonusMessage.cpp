#include "ObtainedItemWithBonusMessage.h"
#include "ObtainedItemMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Item.h"

void ObtainedItemWithBonusMessage::deserialize(CustomDataInput *input) {
    ObtainedItemMessage::deserialize(input);
    this->_bonusQuantityFunc(input);
}

void ObtainedItemWithBonusMessage::_bonusQuantityFunc(CustomDataInput *input) {
    this->bonusQuantity = input->readVarUhInt();
    if (this->bonusQuantity < 0) {

    }
}
