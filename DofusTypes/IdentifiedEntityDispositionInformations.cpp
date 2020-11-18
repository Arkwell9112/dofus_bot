#include "IdentifiedEntityDispositionInformations.h"
#include "EntityDispositionInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void IdentifiedEntityDispositionInformations::deserialize(CustomDataInput *input) {
    EntityDispositionInformations::deserialize(input);
    this->_idFunc(input);
}

void IdentifiedEntityDispositionInformations::_idFunc(CustomDataInput *input) {
    this->id = input->readDouble();
    if (this->id < -9007199254740990 || this->id > 9007199254740990) {

    }
}
