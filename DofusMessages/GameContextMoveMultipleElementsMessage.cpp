#include "GameContextMoveMultipleElementsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/EntityMovementInformations.h"

void GameContextMoveMultipleElementsMessage::deserialize(CustomDataInput *input) {
    EntityMovementInformations _item1;
    unsigned int _movementsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _movementsLen; _i1++) {
        _item1.deserialize(input);
        this->movements.push_back(_item1);
    }
}