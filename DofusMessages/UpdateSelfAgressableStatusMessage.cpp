#include "UpdateSelfAgressableStatusMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void UpdateSelfAgressableStatusMessage::deserialize(CustomDataInput *input) {
    this->_statusFunc(input);
    this->_probationTimeFunc(input);
}

void UpdateSelfAgressableStatusMessage::_statusFunc(CustomDataInput *input) {
    this->status = input->readByte();
    if (this->status < 0) {

    }
}

void UpdateSelfAgressableStatusMessage::_probationTimeFunc(CustomDataInput *input) {
    this->probationTime = input->readInt();
    if (this->probationTime < 0) {

    }
}
