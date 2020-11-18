#include "PartyUpdateLightMessage.h"
#include "AbstractPartyEventMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyUpdateLightMessage::deserialize(CustomDataInput *input) {
    AbstractPartyEventMessage::deserialize(input);
    this->_idFunc(input);
    this->_lifePointsFunc(input);
    this->_maxLifePointsFunc(input);
    this->_prospectingFunc(input);
    this->_regenRateFunc(input);
}

void PartyUpdateLightMessage::_idFunc(CustomDataInput *input) {
    this->id = input->readVarUhLong();
    if (this->id < 0 || this->id > 9007199254740990) {

    }
}

void PartyUpdateLightMessage::_lifePointsFunc(CustomDataInput *input) {
    this->lifePoints = input->readVarUhInt();
    if (this->lifePoints < 0) {

    }
}

void PartyUpdateLightMessage::_maxLifePointsFunc(CustomDataInput *input) {
    this->maxLifePoints = input->readVarUhInt();
    if (this->maxLifePoints < 0) {

    }
}

void PartyUpdateLightMessage::_prospectingFunc(CustomDataInput *input) {
    this->prospecting = input->readVarUhShort();
    if (this->prospecting < 0) {

    }
}

void PartyUpdateLightMessage::_regenRateFunc(CustomDataInput *input) {
    this->regenRate = input->readUnsignedByte();
    if (this->regenRate < 0 || this->regenRate > 255) {

    }
}
