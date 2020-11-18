#include "FinishMoveListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/FinishMoveInformations.h"

void FinishMoveListMessage::deserialize(CustomDataInput *input) {
    FinishMoveInformations _item1;
    unsigned int _finishMovesLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _finishMovesLen; _i1++) {
        _item1.deserialize(input);
        this->finishMoves.push_back(_item1);
    }
}