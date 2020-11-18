#include "PaddockInformations.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PaddockInformations::deserialize(CustomDataInput *input) {
    this->_maxOutdoorMountFunc(input);
    this->_maxItemsFunc(input);
}

void PaddockInformations::_maxOutdoorMountFunc(CustomDataInput *input) {
    this->maxOutdoorMount = input->readVarUhShort();
    if (this->maxOutdoorMount < 0) {

    }
}

void PaddockInformations::_maxItemsFunc(CustomDataInput *input) {
    this->maxItems = input->readVarUhShort();
    if (this->maxItems < 0) {

    }
}
