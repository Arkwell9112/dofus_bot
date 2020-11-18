#include "ObjectUseMultipleMessage.h"
#include "ObjectUseMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectUseMultipleMessage::deserialize(CustomDataInput *input) {
    ObjectUseMessage::deserialize(input);
    this->_quantityFunc(input);
}

void ObjectUseMultipleMessage::_quantityFunc(CustomDataInput *input) {
    this->quantity = input->readVarUhInt();
    if (this->quantity < 0) {

    }
}
