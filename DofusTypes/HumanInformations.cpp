#include "HumanOption.h"
#include "HumanInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HumanInformations::deserialize(CustomDataInput *input) {
    unsigned int _id3 = 0;
    HumanOption _item3;
    this->restrictions.deserialize(input);
    this->_sexFunc(input);
    unsigned int _optionsLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _optionsLen; _i3++) {
        _id3 = input->readUnsignedShort();
        _item3 = *dynamic_cast<HumanOption *>(ProtocolTypeManager::getInstance(_id3, input));
        ProtocolTypeManager::deleteLastInstance();

        this->options.push_back(_item3);
    }
}

void HumanInformations::_sexFunc(CustomDataInput *input) {
    this->sex = input->readBoolean();
}

void HumanInformations::_optionsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    HumanOption _item;
    _item.deserialize(input);
    this->options.push_back(_item);
}
