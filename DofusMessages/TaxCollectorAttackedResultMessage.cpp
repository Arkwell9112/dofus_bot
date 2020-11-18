#include "TaxCollectorAttackedResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TaxCollectorAttackedResultMessage::deserialize(CustomDataInput *input) {
    this->_deadOrAliveFunc(input);
    this->basicInfos.deserialize(input);
    this->guild.deserialize(input);
}

void TaxCollectorAttackedResultMessage::_deadOrAliveFunc(CustomDataInput *input) {
    this->deadOrAlive = input->readBoolean();
}
