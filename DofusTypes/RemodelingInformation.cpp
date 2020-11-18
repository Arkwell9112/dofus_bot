#include "RemodelingInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void RemodelingInformation::deserialize(CustomDataInput *input) {
    int _val5 = 0;
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

void RemodelingInformation::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}

void RemodelingInformation::_breedFunc(CustomDataInput *input) {
    this->breed = input->readByte();
}

void RemodelingInformation::_sexFunc(CustomDataInput *input) {
    this->sex = input->readBoolean();
}

void RemodelingInformation::_cosmeticIdFunc(CustomDataInput *input) {
    this->cosmeticId = input->readVarUhShort();
    if (this->cosmeticId < 0) {

    }
}

void RemodelingInformation::_colorsFunc(CustomDataInput *input) {
    int _val = input->readInt();
    this->colors.push_back(_val);
}
