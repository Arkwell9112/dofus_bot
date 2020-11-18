#include "GameContextRemoveMultipleElementsWithEventsMessage.h"
#include "GameContextRemoveMultipleElementsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameContextRemoveMultipleElementsWithEventsMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    GameContextRemoveMultipleElementsMessage::deserialize(input);
    unsigned int _elementEventIdsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _elementEventIdsLen; _i1++) {
        _val1 = input->readByte();
        if (_val1 < 0) {

        }
        this->elementEventIds.push_back(_val1);
    }
}

void GameContextRemoveMultipleElementsWithEventsMessage::_elementEventIdsFunc(CustomDataInput *input) {
    unsigned int _val = input->readByte();
    if (_val < 0) {

    }
    this->elementEventIds.push_back(_val);
}
