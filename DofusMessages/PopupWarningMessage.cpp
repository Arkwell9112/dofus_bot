#include "PopupWarningMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PopupWarningMessage::deserialize(CustomDataInput *input) {
    this->_lockDurationFunc(input);
    this->_authorFunc(input);
    this->_contentFunc(input);
}

void PopupWarningMessage::_lockDurationFunc(CustomDataInput *input) {
    this->lockDuration = input->readUnsignedByte();
    if (this->lockDuration < 0 || this->lockDuration > 255) {

    }
}

void PopupWarningMessage::_authorFunc(CustomDataInput *input) {
    this->author = input->readUTF();
}

void PopupWarningMessage::_contentFunc(CustomDataInput *input) {
    this->content = input->readUTF();
}
