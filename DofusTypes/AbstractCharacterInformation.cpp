#include "AbstractCharacterInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AbstractCharacterInformation::deserialize(CustomDataInput *input) {
    this->_idFunc(input);
}

void AbstractCharacterInformation::_idFunc(CustomDataInput *input) {
    this->id = input->readVarUhLong();
    if (this->id < 0 || this->id > 9007199254740990) {

    }
}
