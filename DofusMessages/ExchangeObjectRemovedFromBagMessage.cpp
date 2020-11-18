#include "ExchangeObjectRemovedFromBagMessage.h"
#include "ExchangeObjectMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeObjectRemovedFromBagMessage::deserialize(CustomDataInput *input) {
    ExchangeObjectMessage::deserialize(input);
    this->_objectUIDFunc(input);
}

void ExchangeObjectRemovedFromBagMessage::_objectUIDFunc(CustomDataInput *input) {
    this->objectUID = input->readVarUhInt();
    if (this->objectUID < 0) {

    }
}
