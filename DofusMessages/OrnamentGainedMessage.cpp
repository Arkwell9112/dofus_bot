#include "OrnamentGainedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void OrnamentGainedMessage::deserialize(CustomDataInput *input) {
    this->_ornamentIdFunc(input);
}

void OrnamentGainedMessage::_ornamentIdFunc(CustomDataInput *input) {
    this->ornamentId = input->readShort();
    if (this->ornamentId < 0) {

    }
}
