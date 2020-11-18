#include "IndexedEntityLook.h"
#include "EntityLook.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void IndexedEntityLook::deserialize(CustomDataInput *input) {
    this->look.deserialize(input);
    this->_indexFunc(input);
}

void IndexedEntityLook::_indexFunc(CustomDataInput *input) {
    this->index = input->readByte();
    if (this->index < 0) {

    }
}
