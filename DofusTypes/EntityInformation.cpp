#include "EntityInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void EntityInformation::deserialize(CustomDataInput *input) {
    this->_idFunc(input);
    this->_experienceFunc(input);
    this->_statusFunc(input);
}

void EntityInformation::_idFunc(CustomDataInput *input) {
    this->id = input->readVarUhShort();
    if (this->id < 0) {

    }
}

void EntityInformation::_experienceFunc(CustomDataInput *input) {
    this->experience = input->readVarUhInt();
    if (this->experience < 0) {

    }
}

void EntityInformation::_statusFunc(CustomDataInput *input) {
    this->status = input->readBoolean();
}
