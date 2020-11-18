#include "GameContextRemoveMultipleElementsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameContextRemoveMultipleElementsMessage::deserialize(CustomDataInput *input) {
    double _val1 = 0;
    unsigned int _elementsIdsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _elementsIdsLen; _i1++) {
        _val1 = input->readDouble();
        if (_val1 < -9007199254740990 || _val1 > 9007199254740990) {

        }
        this->elementsIds.push_back(_val1);
    }
}

void GameContextRemoveMultipleElementsMessage::_elementsIdsFunc(CustomDataInput *input) {
    double _val = input->readDouble();
    if (_val < -9007199254740990 || _val > 9007199254740990) {

    }
    this->elementsIds.push_back(_val);
}
