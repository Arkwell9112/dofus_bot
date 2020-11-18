#include "OrnamentSelectRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void OrnamentSelectRequestMessage::deserialize(CustomDataInput *input) {
    this->_ornamentIdFunc(input);
}

void OrnamentSelectRequestMessage::_ornamentIdFunc(CustomDataInput *input) {
    this->ornamentId = input->readVarUhShort();
    if (this->ornamentId < 0) {

    }
}
