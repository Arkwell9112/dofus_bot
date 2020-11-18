#include "CompassResetMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CompassResetMessage::deserialize(CustomDataInput *input) {
    this->_typeFunc(input);
}

void CompassResetMessage::_typeFunc(CustomDataInput *input) {
    this->type = input->readByte();
    if (this->type < 0) {

    }
}
