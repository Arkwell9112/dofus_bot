#include "CharacterNameSuggestionSuccessMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterNameSuggestionSuccessMessage::deserialize(CustomDataInput *input) {
    this->_suggestionFunc(input);
}

void CharacterNameSuggestionSuccessMessage::_suggestionFunc(CustomDataInput *input) {
    this->suggestion = input->readUTF();
}
