#include "TaxCollectorInformations.h"
#include "GameFightTaxCollectorInformations.h"
#include "GameFightAIInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightTaxCollectorInformations::deserialize(CustomDataInput *input) {
    GameFightAIInformations::deserialize(input);
    this->_firstNameIdFunc(input);
    this->_lastNameIdFunc(input);
    this->_levelFunc(input);
}

void GameFightTaxCollectorInformations::_firstNameIdFunc(CustomDataInput *input) {
    this->firstNameId = input->readVarUhShort();
    if (this->firstNameId < 0) {

    }
}

void GameFightTaxCollectorInformations::_lastNameIdFunc(CustomDataInput *input) {
    this->lastNameId = input->readVarUhShort();
    if (this->lastNameId < 0) {

    }
}

void GameFightTaxCollectorInformations::_levelFunc(CustomDataInput *input) {
    this->level = input->readUnsignedByte();
    if (this->level < 0 || this->level > 255) {

    }
}
