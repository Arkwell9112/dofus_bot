#include "SellerBuyerDescriptor.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SellerBuyerDescriptor::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _val2 = 0;
    unsigned int _quantitiesLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _quantitiesLen; _i1++) {
        _val1 = input->readVarUhInt();
        if (_val1 < 0) {

        }
        this->quantities.push_back(_val1);
    }
    unsigned int _typesLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _typesLen; _i2++) {
        _val2 = input->readVarUhInt();
        if (_val2 < 0) {

        }
        this->types.push_back(_val2);
    }
    this->_taxPercentageFunc(input);
    this->_taxModificationPercentageFunc(input);
    this->_maxItemLevelFunc(input);
    this->_maxItemPerAccountFunc(input);
    this->_npcContextualIdFunc(input);
    this->_unsoldDelayFunc(input);
}

void SellerBuyerDescriptor::_quantitiesFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhInt();
    if (_val < 0) {

    }
    this->quantities.push_back(_val);
}

void SellerBuyerDescriptor::_typesFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhInt();
    if (_val < 0) {

    }
    this->types.push_back(_val);
}

void SellerBuyerDescriptor::_taxPercentageFunc(CustomDataInput *input) {
    this->taxPercentage = input->readFloat();
}

void SellerBuyerDescriptor::_taxModificationPercentageFunc(CustomDataInput *input) {
    this->taxModificationPercentage = input->readFloat();
}

void SellerBuyerDescriptor::_maxItemLevelFunc(CustomDataInput *input) {
    this->maxItemLevel = input->readUnsignedByte();
    if (this->maxItemLevel < 0 || this->maxItemLevel > 255) {

    }
}

void SellerBuyerDescriptor::_maxItemPerAccountFunc(CustomDataInput *input) {
    this->maxItemPerAccount = input->readVarUhInt();
    if (this->maxItemPerAccount < 0) {

    }
}

void SellerBuyerDescriptor::_npcContextualIdFunc(CustomDataInput *input) {
    this->npcContextualId = input->readInt();
}

void SellerBuyerDescriptor::_unsoldDelayFunc(CustomDataInput *input) {
    this->unsoldDelay = input->readVarUhShort();
    if (this->unsoldDelay < 0) {

    }
}
