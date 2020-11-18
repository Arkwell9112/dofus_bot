#include "AllianceCreationValidMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceCreationValidMessage::deserialize(CustomDataInput *input) {
    this->_allianceNameFunc(input);
    this->_allianceTagFunc(input);
    this->allianceEmblem.deserialize(input);
}

void AllianceCreationValidMessage::_allianceNameFunc(CustomDataInput *input) {
    this->allianceName = input->readUTF();
}

void AllianceCreationValidMessage::_allianceTagFunc(CustomDataInput *input) {
    this->allianceTag = input->readUTF();
}
