#include "CharacterBaseCharacteristic.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterBaseCharacteristic::deserialize(CustomDataInput *input) {
    this->_baseFunc(input);
    this->_additionnalFunc(input);
    this->_objectsAndMountBonusFunc(input);
    this->_alignGiftBonusFunc(input);
    this->_contextModifFunc(input);
}

void CharacterBaseCharacteristic::_baseFunc(CustomDataInput *input) {
    this->base = input->readVarShort();
}

void CharacterBaseCharacteristic::_additionnalFunc(CustomDataInput *input) {
    this->additionnal = input->readVarShort();
}

void CharacterBaseCharacteristic::_objectsAndMountBonusFunc(CustomDataInput *input) {
    this->objectsAndMountBonus = input->readVarShort();
}

void CharacterBaseCharacteristic::_alignGiftBonusFunc(CustomDataInput *input) {
    this->alignGiftBonus = input->readVarShort();
}

void CharacterBaseCharacteristic::_contextModifFunc(CustomDataInput *input) {
    this->contextModif = input->readVarShort();
}
