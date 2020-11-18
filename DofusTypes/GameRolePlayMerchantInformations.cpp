#include "HumanOption.h"
#include "GameRolePlayNamedActorInformations.h"
#include "GameRolePlayMerchantInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayMerchantInformations::deserialize(CustomDataInput *input) {
    unsigned int _id2 = 0;
    HumanOption _item2;
    GameRolePlayNamedActorInformations::deserialize(input);
    this->_sellTypeFunc(input);
    unsigned int _optionsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _optionsLen; _i2++) {
        _id2 = input->readUnsignedShort();
        _item2 = *dynamic_cast<HumanOption *>(ProtocolTypeManager::getInstance(_id2, input));
        ProtocolTypeManager::deleteLastInstance();

        this->options.push_back(_item2);
    }
}

void GameRolePlayMerchantInformations::_sellTypeFunc(CustomDataInput *input) {
    this->sellType = input->readByte();
    if (this->sellType < 0) {

    }
}

void GameRolePlayMerchantInformations::_optionsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    HumanOption _item;
    _item.deserialize(input);
    this->options.push_back(_item);
}
