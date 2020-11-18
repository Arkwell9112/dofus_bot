#include "AllianceModificationNameAndTagValidMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceModificationNameAndTagValidMessage::deserialize(CustomDataInput *input) {
    this->_allianceNameFunc(input);
    this->_allianceTagFunc(input);
}

void AllianceModificationNameAndTagValidMessage::_allianceNameFunc(CustomDataInput *input) {
    this->allianceName = input->readUTF();
}

void AllianceModificationNameAndTagValidMessage::_allianceTagFunc(CustomDataInput *input) {
    this->allianceTag = input->readUTF();
}
