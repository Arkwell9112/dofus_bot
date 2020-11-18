#include "ObjectUseOnCellMessage.h"
#include "ObjectUseMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectUseOnCellMessage::deserialize(CustomDataInput *input) {
    ObjectUseMessage::deserialize(input);
    this->_cellsFunc(input);
}

void ObjectUseOnCellMessage::_cellsFunc(CustomDataInput *input) {
    this->cells = input->readVarUhShort();
    if (this->cells < 0 || this->cells > 559) {

    }
}
