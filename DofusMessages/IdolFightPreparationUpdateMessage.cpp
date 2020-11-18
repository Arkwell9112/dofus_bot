#include "IdolFightPreparationUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Idol.h"

void IdolFightPreparationUpdateMessage::deserialize(CustomDataInput *input) {
    unsigned int _id2 = 0;
    Idol _item2;
    this->_idolSourceFunc(input);
    unsigned int _idolsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _idolsLen; _i2++) {
        _id2 = input->readUnsignedShort();
        _item2 = *dynamic_cast<Idol *>(ProtocolTypeManager::getInstance(_id2, input));
        ProtocolTypeManager::deleteLastInstance();

        this->idols.push_back(_item2);
    }
}

void IdolFightPreparationUpdateMessage::_idolSourceFunc(CustomDataInput *input) {
    this->idolSource = input->readByte();
    if (this->idolSource < 0) {

    }
}

void IdolFightPreparationUpdateMessage::_idolsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    Idol _item;
    _item.deserialize(input);
    this->idols.push_back(_item);
}
