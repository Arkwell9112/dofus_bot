#include "CurrentMapMessage.h"
#include "CurrentMapInstanceMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CurrentMapInstanceMessage::deserialize(CustomDataInput *input) {
    CurrentMapMessage::deserialize(input);
    this->_instantiatedMapIdFunc(input);
}

void CurrentMapInstanceMessage::_instantiatedMapIdFunc(CustomDataInput *input) {
    this->instantiatedMapId = input->readDouble();
    if (this->instantiatedMapId < 0 || this->instantiatedMapId > 9007199254740990) {

    }
}
