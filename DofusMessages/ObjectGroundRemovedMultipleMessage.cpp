#include "ObjectGroundRemovedMultipleMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectGroundRemovedMultipleMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _cellsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _cellsLen; _i1++) {
        _val1 = input->readVarUhShort();
        if (_val1 < 0 || _val1 > 559) {

        }
        this->cells.push_back(_val1);
    }
}

void ObjectGroundRemovedMultipleMessage::_cellsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0 || _val > 559) {

    }
    this->cells.push_back(_val);
}
