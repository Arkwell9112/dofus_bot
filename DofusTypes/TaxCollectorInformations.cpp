#include "TaxCollectorInformations.h"
#include "TaxCollectorComplementaryInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TaxCollectorInformations::deserialize(CustomDataInput *input) {
    unsigned int _id10 = 0;
    TaxCollectorComplementaryInformations _item10;
    this->_uniqueIdFunc(input);
    this->_firtNameIdFunc(input);
    this->_lastNameIdFunc(input);
    this->additionalInfos.deserialize(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_subAreaIdFunc(input);
    this->_stateFunc(input);
    this->look.deserialize(input);
    unsigned int _complementsLen = input->readUnsignedShort();
    for (unsigned int _i10 = 0; _i10 < _complementsLen; _i10++) {
        _id10 = input->readUnsignedShort();
        _item10 = *dynamic_cast<TaxCollectorComplementaryInformations *>(ProtocolTypeManager::getInstance(_id10,
                                                                                                          input));
        ProtocolTypeManager::deleteLastInstance();

        this->complements.push_back(_item10);
    }
}

void TaxCollectorInformations::_uniqueIdFunc(CustomDataInput *input) {
    this->uniqueId = input->readDouble();
    if (this->uniqueId < 0 || this->uniqueId > 9007199254740990) {

    }
}

void TaxCollectorInformations::_firtNameIdFunc(CustomDataInput *input) {
    this->firtNameId = input->readVarUhShort();
    if (this->firtNameId < 0) {

    }
}

void TaxCollectorInformations::_lastNameIdFunc(CustomDataInput *input) {
    this->lastNameId = input->readVarUhShort();
    if (this->lastNameId < 0) {

    }
}

void TaxCollectorInformations::_worldXFunc(CustomDataInput *input) {
    this->worldX = input->readShort();
    if (this->worldX < -255 || this->worldX > 255) {

    }
}

void TaxCollectorInformations::_worldYFunc(CustomDataInput *input) {
    this->worldY = input->readShort();
    if (this->worldY < -255 || this->worldY > 255) {

    }
}

void TaxCollectorInformations::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}

void TaxCollectorInformations::_stateFunc(CustomDataInput *input) {
    this->state = input->readByte();
    if (this->state < 0) {

    }
}

void TaxCollectorInformations::_complementsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    TaxCollectorComplementaryInformations _item;
    _item.deserialize(input);
    this->complements.push_back(_item);
}
