#include "LockableShowCodeDialogMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void LockableShowCodeDialogMessage::deserialize(CustomDataInput *input) {
    this->_changeOrUseFunc(input);
    this->_codeSizeFunc(input);
}

void LockableShowCodeDialogMessage::_changeOrUseFunc(CustomDataInput *input) {
    this->changeOrUse = input->readBoolean();
}

void LockableShowCodeDialogMessage::_codeSizeFunc(CustomDataInput *input) {
    this->codeSize = input->readByte();
    if (this->codeSize < 0) {

    }
}
