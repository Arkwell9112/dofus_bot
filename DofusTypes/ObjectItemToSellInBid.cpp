#include "ObjectItemToSellInBid.h"
#include "ObjectItemToSell.h"
#include "ObjectItem.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectItemToSellInBid::deserialize(CustomDataInput *input) {
    ObjectItemToSell::deserialize(input);
    this->_unsoldDelayFunc(input);
}

void ObjectItemToSellInBid::_unsoldDelayFunc(CustomDataInput *input) {
    this->unsoldDelay = input->readInt();
    if (this->unsoldDelay < 0) {

    }
}
