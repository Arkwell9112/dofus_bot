#include "RemodelingInformation.h"
#include "CharacterRemodelingInformation.h"
#include "AbstractCharacterInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterRemodelingInformation::deserialize(CustomDataInput *input) {
    int _val5 = 0;
    AbstractCharacterInformation::deserialize(input);
    this->_nameFunc(input);
    this->_breedFunc(input);
    this->_sexFunc(input);
    this->_cosmeticIdFunc(input);
    unsigned int _colorsLen = input->readUnsignedShort();
    for (unsigned int _i5 = 0; _i5 < _colorsLen; _i5++) {
        _val5 = input->readInt();
        this->colors.push_back(_val5);
    }
}

void CharacterRemodelingInformation::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}

void CharacterRemodelingInformation::_breedFunc(CustomDataInput *input) {
    this->breed = input->readByte();
}

void CharacterRemodelingInformation::_sexFunc(CustomDataInput *input) {
    this->sex = input->readBoolean();
}

void CharacterRemodelingInformation::_cosmeticIdFunc(CustomDataInput *input) {
    this->cosmeticId = input->readVarUhShort();
    if (this->cosmeticId < 0) {

    }
}

void CharacterRemodelingInformation::_colorsFunc(CustomDataInput *input) {
    int _val = input->readInt();
    this->colors.push_back(_val);
}
