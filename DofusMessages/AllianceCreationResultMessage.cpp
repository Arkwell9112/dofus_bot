#include "AllianceCreationResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceCreationResultMessage::deserialize(CustomDataInput *input) {
    this->_resultFunc(input);
}

void AllianceCreationResultMessage::_resultFunc(CustomDataInput *input) {
    this->result = input->readByte();
    if (this->result < 0) {

    }
}
