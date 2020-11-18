#include "DebugHighlightCellsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void DebugHighlightCellsMessage::deserialize(CustomDataInput *input) {
    unsigned int _val2 = 0;
    this->_colorFunc(input);
    unsigned int _cellsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _cellsLen; _i2++) {
        _val2 = input->readVarUhShort();
        if (_val2 < 0 || _val2 > 559) {

        }
        this->cells.push_back(_val2);
    }
}

void DebugHighlightCellsMessage::_colorFunc(CustomDataInput *input) {
    this->color = input->readDouble();
    if (this->color < -9007199254740990 || this->color > 9007199254740990) {

    }
}

void DebugHighlightCellsMessage::_cellsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0 || _val > 559) {

    }
    this->cells.push_back(_val);
}
