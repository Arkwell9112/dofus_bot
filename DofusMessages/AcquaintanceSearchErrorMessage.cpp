#include "AcquaintanceSearchErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AcquaintanceSearchErrorMessage::deserialize(CustomDataInput *input) {
    this->_reasonFunc(input);
}

void AcquaintanceSearchErrorMessage::_reasonFunc(CustomDataInput *input) {
    this->reason = input->readByte();
    if (this->reason < 0) {

    }
}
