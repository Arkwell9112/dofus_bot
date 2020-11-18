#include "ObjectEffectDice.h"
#include "ObjectEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectEffectDice::deserialize(CustomDataInput *input) {
    ObjectEffect::deserialize(input);
    this->_diceNumFunc(input);
    this->_diceSideFunc(input);
    this->_diceConstFunc(input);
}

void ObjectEffectDice::_diceNumFunc(CustomDataInput *input) {
    this->diceNum = input->readVarUhInt();
    if (this->diceNum < 0) {

    }
}

void ObjectEffectDice::_diceSideFunc(CustomDataInput *input) {
    this->diceSide = input->readVarUhInt();
    if (this->diceSide < 0) {

    }
}

void ObjectEffectDice::_diceConstFunc(CustomDataInput *input) {
    this->diceConst = input->readVarUhInt();
    if (this->diceConst < 0) {

    }
}
