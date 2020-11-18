#include "GameFightFighterTaxCollectorLightInformations.h"
#include "GameFightFighterLightInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightFighterTaxCollectorLightInformations::deserialize(CustomDataInput *input) {
    GameFightFighterLightInformations::deserialize(input);
    this->_firstNameIdFunc(input);
    this->_lastNameIdFunc(input);
}

void GameFightFighterTaxCollectorLightInformations::_firstNameIdFunc(CustomDataInput *input) {
    this->firstNameId = input->readVarUhShort();
    if (this->firstNameId < 0) {

    }
}

void GameFightFighterTaxCollectorLightInformations::_lastNameIdFunc(CustomDataInput *input) {
    this->lastNameId = input->readVarUhShort();
    if (this->lastNameId < 0) {

    }
}
