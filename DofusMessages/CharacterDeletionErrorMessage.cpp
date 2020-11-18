#include "CharacterDeletionErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterDeletionErrorMessage::deserialize(CustomDataInput *input) {
    this->_reasonFunc(input);
}

void CharacterDeletionErrorMessage::_reasonFunc(CustomDataInput *input) {
    this->reason = input->readByte();
    if (this->reason < 0) {

    }
}
