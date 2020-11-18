#include "InteractiveMapUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/InteractiveElement.h"

void InteractiveMapUpdateMessage::deserialize(CustomDataInput *input) {
    unsigned int _id1 = 0;
    InteractiveElement _item1;
    unsigned int _interactiveElementsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _interactiveElementsLen; _i1++) {
        _id1 = input->readUnsignedShort();
        _item1 = *dynamic_cast<InteractiveElement *>(ProtocolTypeManager::getInstance(_id1, input));
        ProtocolTypeManager::deleteLastInstance();

        this->interactiveElements.push_back(_item1);
    }
}

void InteractiveMapUpdateMessage::_interactiveElementsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    InteractiveElement _item;
    _item.deserialize(input);
    this->interactiveElements.push_back(_item);
}
