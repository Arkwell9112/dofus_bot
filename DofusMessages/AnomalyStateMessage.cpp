#include "AnomalyStateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AnomalyStateMessage::deserialize(CustomDataInput *input) {
    this->_subAreaIdFunc(input);
    this->_openFunc(input);
    this->_closingTimeFunc(input);
}

void AnomalyStateMessage::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}

void AnomalyStateMessage::_openFunc(CustomDataInput *input) {
    this->open = input->readBoolean();
}

void AnomalyStateMessage::_closingTimeFunc(CustomDataInput *input) {
    this->closingTime = input->readVarUhLong();
    if (this->closingTime < 0 || this->closingTime > 9007199254740990) {

    }
}
