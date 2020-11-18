#include "StatedElement.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void StatedElement::deserialize(CustomDataInput *input) {
    this->_elementIdFunc(input);
    this->_elementCellIdFunc(input);
    this->_elementStateFunc(input);
    this->_onCurrentMapFunc(input);
}

void StatedElement::_elementIdFunc(CustomDataInput *input) {
    this->elementId = input->readInt();
    if (this->elementId < 0) {

    }
}

void StatedElement::_elementCellIdFunc(CustomDataInput *input) {
    this->elementCellId = input->readVarUhShort();
    if (this->elementCellId < 0 || this->elementCellId > 559) {

    }
}

void StatedElement::_elementStateFunc(CustomDataInput *input) {
    this->elementState = input->readVarUhInt();
    if (this->elementState < 0) {

    }
}

void StatedElement::_onCurrentMapFunc(CustomDataInput *input) {
    this->onCurrentMap = input->readBoolean();
}
