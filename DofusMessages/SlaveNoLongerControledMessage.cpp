#include "SlaveNoLongerControledMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SlaveNoLongerControledMessage::deserialize(CustomDataInput *input) {
    this->_masterIdFunc(input);
    this->_slaveIdFunc(input);
}

void SlaveNoLongerControledMessage::_masterIdFunc(CustomDataInput *input) {
    this->masterId = input->readDouble();
    if (this->masterId < -9007199254740990 || this->masterId > 9007199254740990) {

    }
}

void SlaveNoLongerControledMessage::_slaveIdFunc(CustomDataInput *input) {
    this->slaveId = input->readDouble();
    if (this->slaveId < -9007199254740990 || this->slaveId > 9007199254740990) {

    }
}
