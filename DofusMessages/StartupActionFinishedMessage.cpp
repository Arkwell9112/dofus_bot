#include "StartupActionFinishedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void StartupActionFinishedMessage::deserialize(CustomDataInput *input) {
    this->deserializeByteBoxes(input);
    this->_actionIdFunc(input);
}

void StartupActionFinishedMessage::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->success = BooleanByteWrapper::getFlag(_box0, 0);
    this->automaticAction = BooleanByteWrapper::getFlag(_box0, 1);
}

void StartupActionFinishedMessage::_actionIdFunc(CustomDataInput *input) {
    this->actionId = input->readInt();
    if (this->actionId < 0) {

    }
}
