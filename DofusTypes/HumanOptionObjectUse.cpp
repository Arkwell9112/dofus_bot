#include "HumanOptionObjectUse.h"
#include "HumanOption.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HumanOptionObjectUse::deserialize(CustomDataInput *input) {
    HumanOption::deserialize(input);
    this->_delayTypeIdFunc(input);
    this->_delayEndTimeFunc(input);
    this->_objectGIDFunc(input);
}

void HumanOptionObjectUse::_delayTypeIdFunc(CustomDataInput *input) {
    this->delayTypeId = input->readByte();
    if (this->delayTypeId < 0) {

    }
}

void HumanOptionObjectUse::_delayEndTimeFunc(CustomDataInput *input) {
    this->delayEndTime = input->readDouble();
    if (this->delayEndTime < 0 || this->delayEndTime > 9007199254740990) {

    }
}

void HumanOptionObjectUse::_objectGIDFunc(CustomDataInput *input) {
    this->objectGID = input->readVarUhShort();
    if (this->objectGID < 0) {

    }
}
