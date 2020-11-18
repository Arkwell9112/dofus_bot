#include "TitlesAndOrnamentsListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TitlesAndOrnamentsListMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _val2 = 0;
    unsigned int _titlesLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _titlesLen; _i1++) {
        _val1 = input->readVarUhShort();
        if (_val1 < 0) {

        }
        this->titles.push_back(_val1);
    }
    unsigned int _ornamentsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _ornamentsLen; _i2++) {
        _val2 = input->readVarUhShort();
        if (_val2 < 0) {

        }
        this->ornaments.push_back(_val2);
    }
    this->_activeTitleFunc(input);
    this->_activeOrnamentFunc(input);
}

void TitlesAndOrnamentsListMessage::_titlesFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->titles.push_back(_val);
}

void TitlesAndOrnamentsListMessage::_ornamentsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->ornaments.push_back(_val);
}

void TitlesAndOrnamentsListMessage::_activeTitleFunc(CustomDataInput *input) {
    this->activeTitle = input->readVarUhShort();
    if (this->activeTitle < 0) {

    }
}

void TitlesAndOrnamentsListMessage::_activeOrnamentFunc(CustomDataInput *input) {
    this->activeOrnament = input->readVarUhShort();
    if (this->activeOrnament < 0) {

    }
}
