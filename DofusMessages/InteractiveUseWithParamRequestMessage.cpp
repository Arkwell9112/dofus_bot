#include "InteractiveUseWithParamRequestMessage.h"
#include "InteractiveUseRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void InteractiveUseWithParamRequestMessage::deserialize(CustomDataInput *input) {
    InteractiveUseRequestMessage::deserialize(input);
    this->_idFunc(input);
}

void InteractiveUseWithParamRequestMessage::_idFunc(CustomDataInput *input) {
    this->id = input->readInt();
}
