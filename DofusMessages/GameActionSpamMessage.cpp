#include "GameActionSpamMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionSpamMessage::deserialize(CustomDataInput *input) {
    int _val1 = 0;
    unsigned int _cellsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _cellsLen; _i1++) {
        _val1 = input->readShort();
        this->cells.push_back(_val1);
    }
}

void GameActionSpamMessage::_cellsFunc(CustomDataInput *input) {
    int _val = input->readShort();
    this->cells.push_back(_val);
}
