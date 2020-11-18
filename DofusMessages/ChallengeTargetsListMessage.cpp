#include "ChallengeTargetsListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ChallengeTargetsListMessage::deserialize(CustomDataInput *input) {
    double _val1 = 0;
    int _val2 = 0;
    unsigned int _targetIdsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _targetIdsLen; _i1++) {
        _val1 = input->readDouble();
        if (_val1 < -9007199254740990 || _val1 > 9007199254740990) {

        }
        this->targetIds.push_back(_val1);
    }
    unsigned int _targetCellsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _targetCellsLen; _i2++) {
        _val2 = input->readShort();
        if (_val2 < -1 || _val2 > 559) {

        }
        this->targetCells.push_back(_val2);
    }
}

void ChallengeTargetsListMessage::_targetIdsFunc(CustomDataInput *input) {
    double _val = input->readDouble();
    if (_val < -9007199254740990 || _val > 9007199254740990) {

    }
    this->targetIds.push_back(_val);
}

void ChallengeTargetsListMessage::_targetCellsFunc(CustomDataInput *input) {
    int _val = input->readShort();
    if (_val < -1 || _val > 559) {

    }
    this->targetCells.push_back(_val);
}
