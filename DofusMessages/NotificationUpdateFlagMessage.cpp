#include "NotificationUpdateFlagMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void NotificationUpdateFlagMessage::deserialize(CustomDataInput *input) {
    this->_indexFunc(input);
}

void NotificationUpdateFlagMessage::_indexFunc(CustomDataInput *input) {
    this->index = input->readVarUhShort();
    if (this->index < 0) {

    }
}
