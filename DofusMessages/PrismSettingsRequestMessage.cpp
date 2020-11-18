#include "PrismSettingsRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PrismSettingsRequestMessage::deserialize(CustomDataInput *input) {
    this->_subAreaIdFunc(input);
    this->_startDefenseTimeFunc(input);
}

void PrismSettingsRequestMessage::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}

void PrismSettingsRequestMessage::_startDefenseTimeFunc(CustomDataInput *input) {
    this->startDefenseTime = input->readByte();
    if (this->startDefenseTime < 0) {

    }
}
