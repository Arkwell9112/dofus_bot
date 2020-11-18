#include "ObjectGroundListAddedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectGroundListAddedMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _val2 = 0;
    unsigned int _cellsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _cellsLen; _i1++) {
        _val1 = input->readVarUhShort();
        if (_val1 < 0 || _val1 > 559) {

        }
        this->cells.push_back(_val1);
    }
    unsigned int _referenceIdsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _referenceIdsLen; _i2++) {
        _val2 = input->readVarUhShort();
        if (_val2 < 0) {

        }
        this->referenceIds.push_back(_val2);
    }
}

void ObjectGroundListAddedMessage::_cellsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0 || _val > 559) {

    }
    this->cells.push_back(_val);
}

void ObjectGroundListAddedMessage::_referenceIdsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->referenceIds.push_back(_val);
}
