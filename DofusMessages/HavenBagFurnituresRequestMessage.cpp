#include "HavenBagFurnituresRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HavenBagFurnituresRequestMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    int _val2 = 0;
    unsigned int _val3 = 0;
    unsigned int _cellIdsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _cellIdsLen; _i1++) {
        _val1 = input->readVarUhShort();
        if (_val1 < 0) {

        }
        this->cellIds.push_back(_val1);
    }
    unsigned int _funitureIdsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _funitureIdsLen; _i2++) {
        _val2 = input->readInt();
        this->funitureIds.push_back(_val2);
    }
    unsigned int _orientationsLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _orientationsLen; _i3++) {
        _val3 = input->readByte();
        if (_val3 < 0) {

        }
        this->orientations.push_back(_val3);
    }
}

void HavenBagFurnituresRequestMessage::_cellIdsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->cellIds.push_back(_val);
}

void HavenBagFurnituresRequestMessage::_funitureIdsFunc(CustomDataInput *input) {
    int _val = input->readInt();
    this->funitureIds.push_back(_val);
}

void HavenBagFurnituresRequestMessage::_orientationsFunc(CustomDataInput *input) {
    unsigned int _val = input->readByte();
    if (_val < 0) {

    }
    this->orientations.push_back(_val);
}
