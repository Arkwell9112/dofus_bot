#include "CharacterNameSuggestionFailureMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterNameSuggestionFailureMessage::deserialize(CustomDataInput *input) {
    this->_reasonFunc(input);
}

void CharacterNameSuggestionFailureMessage::_reasonFunc(CustomDataInput *input) {
    this->reason = input->readByte();
    if (this->reason < 0) {

    }
}
