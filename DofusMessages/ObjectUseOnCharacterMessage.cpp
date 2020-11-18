#include "ObjectUseOnCharacterMessage.h"
#include "ObjectUseMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectUseOnCharacterMessage::deserialize(CustomDataInput *input) {
    ObjectUseMessage::deserialize(input);
    this->_characterIdFunc(input);
}

void ObjectUseOnCharacterMessage::_characterIdFunc(CustomDataInput *input) {
    this->characterId = input->readVarUhLong();
    if (this->characterId < 0 || this->characterId > 9007199254740990) {

    }
}
