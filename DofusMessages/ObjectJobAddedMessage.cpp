#include "ObjectJobAddedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectJobAddedMessage::deserialize(CustomDataInput *input) {
    this->_jobIdFunc(input);
}

void ObjectJobAddedMessage::_jobIdFunc(CustomDataInput *input) {
    this->jobId = input->readByte();
    if (this->jobId < 0) {

    }
}
