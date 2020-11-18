#include "PartyEntityMemberInformation.h"
#include "PartyEntityBaseInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyEntityMemberInformation::deserialize(CustomDataInput *input) {
    PartyEntityBaseInformation::deserialize(input);
    this->_initiativeFunc(input);
    this->_lifePointsFunc(input);
    this->_maxLifePointsFunc(input);
    this->_prospectingFunc(input);
    this->_regenRateFunc(input);
}

void PartyEntityMemberInformation::_initiativeFunc(CustomDataInput *input) {
    this->initiative = input->readVarUhShort();
    if (this->initiative < 0) {

    }
}

void PartyEntityMemberInformation::_lifePointsFunc(CustomDataInput *input) {
    this->lifePoints = input->readVarUhInt();
    if (this->lifePoints < 0) {

    }
}

void PartyEntityMemberInformation::_maxLifePointsFunc(CustomDataInput *input) {
    this->maxLifePoints = input->readVarUhInt();
    if (this->maxLifePoints < 0) {

    }
}

void PartyEntityMemberInformation::_prospectingFunc(CustomDataInput *input) {
    this->prospecting = input->readVarUhShort();
    if (this->prospecting < 0) {

    }
}

void PartyEntityMemberInformation::_regenRateFunc(CustomDataInput *input) {
    this->regenRate = input->readUnsignedByte();
    if (this->regenRate < 0 || this->regenRate > 255) {

    }
}
