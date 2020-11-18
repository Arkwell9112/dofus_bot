#include "AllianceModificationValidMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceModificationValidMessage::deserialize(CustomDataInput *input) {
    this->_allianceNameFunc(input);
    this->_allianceTagFunc(input);
    this->Alliancemblem.deserialize(input);
}

void AllianceModificationValidMessage::_allianceNameFunc(CustomDataInput *input) {
    this->allianceName = input->readUTF();
}

void AllianceModificationValidMessage::_allianceTagFunc(CustomDataInput *input) {
    this->allianceTag = input->readUTF();
}
