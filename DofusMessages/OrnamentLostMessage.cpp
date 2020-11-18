#include "OrnamentLostMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void OrnamentLostMessage::deserialize(CustomDataInput *input) {
    this->_ornamentIdFunc(input);
}

void OrnamentLostMessage::_ornamentIdFunc(CustomDataInput *input) {
    this->ornamentId = input->readShort();
    if (this->ornamentId < 0) {

    }
}
