#include "FightStartingPositions.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FightStartingPositions::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _val2 = 0;
    unsigned int _positionsForChallengersLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _positionsForChallengersLen; _i1++) {
        _val1 = input->readVarUhShort();
        if (_val1 < 0 || _val1 > 559) {

        }
        this->positionsForChallengers.push_back(_val1);
    }
    unsigned int _positionsForDefendersLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _positionsForDefendersLen; _i2++) {
        _val2 = input->readVarUhShort();
        if (_val2 < 0 || _val2 > 559) {

        }
        this->positionsForDefenders.push_back(_val2);
    }
}

void FightStartingPositions::_positionsForChallengersFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0 || _val > 559) {

    }
    this->positionsForChallengers.push_back(_val);
}

void FightStartingPositions::_positionsForDefendersFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0 || _val > 559) {

    }
    this->positionsForDefenders.push_back(_val);
}
