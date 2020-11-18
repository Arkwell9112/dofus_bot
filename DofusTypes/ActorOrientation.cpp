#include "ActorOrientation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ActorOrientation::deserialize(CustomDataInput *input) {
    this->_idFunc(input);
    this->_directionFunc(input);
}

void ActorOrientation::_idFunc(CustomDataInput *input) {
    this->id = input->readDouble();
    if (this->id < -9007199254740990 || this->id > 9007199254740990) {

    }
}

void ActorOrientation::_directionFunc(CustomDataInput *input) {
    this->direction = input->readByte();
    if (this->direction < 0) {

    }
}
