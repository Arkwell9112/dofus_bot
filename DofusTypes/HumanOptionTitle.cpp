#include "HumanOptionTitle.h"
#include "HumanOption.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HumanOptionTitle::deserialize(CustomDataInput *input) {
    HumanOption::deserialize(input);
    this->_titleIdFunc(input);
    this->_titleParamFunc(input);
}

void HumanOptionTitle::_titleIdFunc(CustomDataInput *input) {
    this->titleId = input->readVarUhShort();
    if (this->titleId < 0) {

    }
}

void HumanOptionTitle::_titleParamFunc(CustomDataInput *input) {
    this->titleParam = input->readUTF();
}
