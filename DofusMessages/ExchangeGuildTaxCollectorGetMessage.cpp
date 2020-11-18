#include "ExchangeGuildTaxCollectorGetMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItemGenericQuantity.h"

#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

void ExchangeGuildTaxCollectorGetMessage::deserialize(CustomDataInput *input) {
    ObjectItemGenericQuantity _item11;
    this->_collectorNameFunc(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_mapIdFunc(input);
    this->_subAreaIdFunc(input);
    this->_userNameFunc(input);
    this->_callerIdFunc(input);
    this->_callerNameFunc(input);
    this->_experienceFunc(input);
    this->_podsFunc(input);
    unsigned int _objectsInfosLen = input->readUnsignedShort();
    for (unsigned int _i11 = 0; _i11 < _objectsInfosLen; _i11++) {
        _item11.deserialize(input);
        this->objectsInfos.push_back(_item11);
    }
}

void ExchangeGuildTaxCollectorGetMessage::_collectorNameFunc(CustomDataInput *input) {
    this->collectorName = input->readUTF();
}

void ExchangeGuildTaxCollectorGetMessage::_worldXFunc(CustomDataInput *input) {
    this->worldX = input->readShort();
    if (this->worldX < -255 || this->worldX > 255) {

    }
}

void ExchangeGuildTaxCollectorGetMessage::_worldYFunc(CustomDataInput *input) {
    this->worldY = input->readShort();
    if (this->worldY < -255 || this->worldY > 255) {

    }
}

void ExchangeGuildTaxCollectorGetMessage::_mapIdFunc(CustomDataInput *input) {
    this->mapId = input->readDouble();
    if (this->mapId < 0 || this->mapId > 9007199254740990) {

    }
}

void ExchangeGuildTaxCollectorGetMessage::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}

void ExchangeGuildTaxCollectorGetMessage::_userNameFunc(CustomDataInput *input) {
    this->userName = input->readUTF();
}

void ExchangeGuildTaxCollectorGetMessage::_callerIdFunc(CustomDataInput *input) {
    this->callerId = input->readVarUhLong();
    if (this->callerId < 0 || this->callerId > 9007199254740990) {

    }
}

void ExchangeGuildTaxCollectorGetMessage::_callerNameFunc(CustomDataInput *input) {
    this->callerName = input->readUTF();
}

void ExchangeGuildTaxCollectorGetMessage::_experienceFunc(CustomDataInput *input) {
    this->experience = input->readDouble();
    if (this->experience < -9007199254740990 || this->experience > 9007199254740990) {

    }
}

void ExchangeGuildTaxCollectorGetMessage::_podsFunc(CustomDataInput *input) {
    this->pods = input->readVarUhShort();
    if (this->pods < 0) {

    }
}
