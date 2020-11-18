#include "DungeonKeyRingMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void DungeonKeyRingMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _val2 = 0;
    unsigned int _availablesLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _availablesLen; _i1++) {
        _val1 = input->readVarUhShort();
        if (_val1 < 0) {

        }
        this->availables.push_back(_val1);
    }
    unsigned int _unavailablesLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _unavailablesLen; _i2++) {
        _val2 = input->readVarUhShort();
        if (_val2 < 0) {

        }
        this->unavailables.push_back(_val2);
    }
}

void DungeonKeyRingMessage::_availablesFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->availables.push_back(_val);
}

void DungeonKeyRingMessage::_unavailablesFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->unavailables.push_back(_val);
}
