#include "OrnamentSelectedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void OrnamentSelectedMessage::deserialize(CustomDataInput *input) {
    this->_ornamentIdFunc(input);
}

void OrnamentSelectedMessage::_ornamentIdFunc(CustomDataInput *input) {
    this->ornamentId = input->readVarUhShort();
    if (this->ornamentId < 0) {

    }
}
