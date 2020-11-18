#include "StatedMapUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/StatedElement.h"

void StatedMapUpdateMessage::deserialize(CustomDataInput *input) {
    StatedElement _item1;
    unsigned int _statedElementsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _statedElementsLen; _i1++) {
        _item1.deserialize(input);
        this->statedElements.push_back(_item1);
    }
}