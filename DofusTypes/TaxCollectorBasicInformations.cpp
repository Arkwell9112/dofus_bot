#include "TaxCollectorBasicInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TaxCollectorBasicInformations::deserialize(CustomDataInput *input) {
    this->_firstNameIdFunc(input);
    this->_lastNameIdFunc(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_mapIdFunc(input);
    this->_subAreaIdFunc(input);
}

void TaxCollectorBasicInformations::_firstNameIdFunc(CustomDataInput *input) {
    this->firstNameId = input->readVarUhShort();
    if (this->firstNameId < 0) {

    }
}

void TaxCollectorBasicInformations::_lastNameIdFunc(CustomDataInput *input) {
    this->lastNameId = input->readVarUhShort();
    if (this->lastNameId < 0) {

    }
}

void TaxCollectorBasicInformations::_worldXFunc(CustomDataInput *input) {
    this->worldX = input->readShort();
    if (this->worldX < -255 || this->worldX > 255) {

    }
}

void TaxCollectorBasicInformations::_worldYFunc(CustomDataInput *input) {
    this->worldY = input->readShort();
    if (this->worldY < -255 || this->worldY > 255) {

    }
}

void TaxCollectorBasicInformations::_mapIdFunc(CustomDataInput *input) {
    this->mapId = input->readDouble();
    if (this->mapId < 0 || this->mapId > 9007199254740990) {

    }
}

void TaxCollectorBasicInformations::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}
