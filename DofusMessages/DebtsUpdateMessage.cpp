#include "DebtsUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/DebtInformation.h"

void DebtsUpdateMessage::deserialize(CustomDataInput *input) {
    unsigned int _id2 = 0;
    DebtInformation _item2;
    this->_actionFunc(input);
    unsigned int _debtsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _debtsLen; _i2++) {
        _id2 = input->readUnsignedShort();
        _item2 = *dynamic_cast<DebtInformation *>(ProtocolTypeManager::getInstance(_id2, input));
        ProtocolTypeManager::deleteLastInstance();

        this->debts.push_back(_item2);
    }
}

void DebtsUpdateMessage::_actionFunc(CustomDataInput *input) {
    this->action = input->readByte();
    if (this->action < 0) {

    }
}

void DebtsUpdateMessage::_debtsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    DebtInformation _item;
    _item.deserialize(input);
    this->debts.push_back(_item);
}
