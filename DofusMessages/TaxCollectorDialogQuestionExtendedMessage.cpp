#include "TaxCollectorDialogQuestionExtendedMessage.h"
#include "TaxCollectorDialogQuestionBasicMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TaxCollectorDialogQuestionExtendedMessage::deserialize(CustomDataInput *input) {
    TaxCollectorDialogQuestionBasicMessage::deserialize(input);
    this->_maxPodsFunc(input);
    this->_prospectingFunc(input);
    this->_wisdomFunc(input);
    this->_taxCollectorsCountFunc(input);
    this->_taxCollectorAttackFunc(input);
    this->_kamasFunc(input);
    this->_experienceFunc(input);
    this->_podsFunc(input);
    this->_itemsValueFunc(input);
}

void TaxCollectorDialogQuestionExtendedMessage::_maxPodsFunc(CustomDataInput *input) {
    this->maxPods = input->readVarUhShort();
    if (this->maxPods < 0) {

    }
}

void TaxCollectorDialogQuestionExtendedMessage::_prospectingFunc(CustomDataInput *input) {
    this->prospecting = input->readVarUhShort();
    if (this->prospecting < 0) {

    }
}

void TaxCollectorDialogQuestionExtendedMessage::_wisdomFunc(CustomDataInput *input) {
    this->wisdom = input->readVarUhShort();
    if (this->wisdom < 0) {

    }
}

void TaxCollectorDialogQuestionExtendedMessage::_taxCollectorsCountFunc(CustomDataInput *input) {
    this->taxCollectorsCount = input->readByte();
    if (this->taxCollectorsCount < 0) {

    }
}

void TaxCollectorDialogQuestionExtendedMessage::_taxCollectorAttackFunc(CustomDataInput *input) {
    this->taxCollectorAttack = input->readInt();
}

void TaxCollectorDialogQuestionExtendedMessage::_kamasFunc(CustomDataInput *input) {
    this->kamas = input->readVarUhLong();
    if (this->kamas < 0 || this->kamas > 9007199254740990) {

    }
}

void TaxCollectorDialogQuestionExtendedMessage::_experienceFunc(CustomDataInput *input) {
    this->experience = input->readVarUhLong();
    if (this->experience < 0 || this->experience > 9007199254740990) {

    }
}

void TaxCollectorDialogQuestionExtendedMessage::_podsFunc(CustomDataInput *input) {
    this->pods = input->readVarUhInt();
    if (this->pods < 0) {

    }
}

void TaxCollectorDialogQuestionExtendedMessage::_itemsValueFunc(CustomDataInput *input) {
    this->itemsValue = input->readVarUhLong();
    if (this->itemsValue < 0 || this->itemsValue > 9007199254740990) {

    }
}
