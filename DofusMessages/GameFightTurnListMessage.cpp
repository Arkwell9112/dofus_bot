#include "GameFightTurnListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightTurnListMessage::deserialize(CustomDataInput *input) {
    double _val1 = 0;
    double _val2 = 0;
    unsigned int _idsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _idsLen; _i1++) {
        _val1 = input->readDouble();
        if (_val1 < -9007199254740990 || _val1 > 9007199254740990) {

        }
        this->ids.push_back(_val1);
    }
    unsigned int _deadsIdsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _deadsIdsLen; _i2++) {
        _val2 = input->readDouble();
        if (_val2 < -9007199254740990 || _val2 > 9007199254740990) {

        }
        this->deadsIds.push_back(_val2);
    }
}

void GameFightTurnListMessage::_idsFunc(CustomDataInput *input) {
    double _val = input->readDouble();
    if (_val < -9007199254740990 || _val > 9007199254740990) {

    }
    this->ids.push_back(_val);
}

void GameFightTurnListMessage::_deadsIdsFunc(CustomDataInput *input) {
    double _val = input->readDouble();
    if (_val < -9007199254740990 || _val > 9007199254740990) {

    }
    this->deadsIds.push_back(_val);
}
