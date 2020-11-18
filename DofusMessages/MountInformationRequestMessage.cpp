#include "MountInformationRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MountInformationRequestMessage::deserialize(CustomDataInput *input) {
    this->_idFunc(input);
    this->_timeFunc(input);
}

void MountInformationRequestMessage::_idFunc(CustomDataInput *input) {
    this->id = input->readDouble();
    if (this->id < -9007199254740990 || this->id > 9007199254740990) {

    }
}

void MountInformationRequestMessage::_timeFunc(CustomDataInput *input) {
    this->time = input->readDouble();
    if (this->time < -9007199254740990 || this->time > 9007199254740990) {

    }
}
