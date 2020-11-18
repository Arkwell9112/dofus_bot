#include "CharacterDeletionRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterDeletionRequestMessage::deserialize(CustomDataInput *input) {
    this->_characterIdFunc(input);
    this->_secretAnswerHashFunc(input);
}

void CharacterDeletionRequestMessage::_characterIdFunc(CustomDataInput *input) {
    this->characterId = input->readVarUhLong();
    if (this->characterId < 0 || this->characterId > 9007199254740990) {

    }
}

void CharacterDeletionRequestMessage::_secretAnswerHashFunc(CustomDataInput *input) {
    this->secretAnswerHash = input->readUTF();
}
