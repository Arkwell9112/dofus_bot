#include "CharacterSelectedForceMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterSelectedForceMessage::deserialize(CustomDataInput *input) {
    this->_idFunc(input);
}

void CharacterSelectedForceMessage::_idFunc(CustomDataInput *input) {
    this->id = input->readInt();
    if (this->id < 1 || this->id > 2147483647) {

    }
}
