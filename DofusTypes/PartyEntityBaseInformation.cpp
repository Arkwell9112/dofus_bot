#include "PartyEntityBaseInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyEntityBaseInformation::deserialize(CustomDataInput *input) {
    this->_indexIdFunc(input);
    this->_entityModelIdFunc(input);
    this->entityLook.deserialize(input);
}

void PartyEntityBaseInformation::_indexIdFunc(CustomDataInput *input) {
    this->indexId = input->readByte();
    if (this->indexId < 0) {

    }
}

void PartyEntityBaseInformation::_entityModelIdFunc(CustomDataInput *input) {
    this->entityModelId = input->readByte();
    if (this->entityModelId < 0) {

    }
}
