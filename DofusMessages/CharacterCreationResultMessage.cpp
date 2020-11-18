#include "CharacterCreationResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterCreationResultMessage::deserialize(CustomDataInput *input) {
    this->_resultFunc(input);
}

void CharacterCreationResultMessage::_resultFunc(CustomDataInput *input) {
    this->result = input->readByte();
    if (this->result < 0) {

    }
}
