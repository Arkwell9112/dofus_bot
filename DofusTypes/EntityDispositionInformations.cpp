#include "EntityDispositionInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void EntityDispositionInformations::deserialize(CustomDataInput *input) {
    this->_cellIdFunc(input);
    this->_directionFunc(input);
}

void EntityDispositionInformations::_cellIdFunc(CustomDataInput *input) {
    this->cellId = input->readShort();
    if (this->cellId < -1 || this->cellId > 559) {

    }
}

void EntityDispositionInformations::_directionFunc(CustomDataInput *input) {
    this->direction = input->readByte();
    if (this->direction < 0) {

    }
}
