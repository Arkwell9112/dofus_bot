#include "GameDataPlayFarmObjectAnimationMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameDataPlayFarmObjectAnimationMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _cellIdLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _cellIdLen; _i1++) {
        _val1 = input->readVarUhShort();
        if (_val1 < 0 || _val1 > 559) {

        }
        this->cellId.push_back(_val1);
    }
}

void GameDataPlayFarmObjectAnimationMessage::_cellIdFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0 || _val > 559) {

    }
    this->cellId.push_back(_val);
}
