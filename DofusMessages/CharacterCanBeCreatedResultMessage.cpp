#include "CharacterCanBeCreatedResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterCanBeCreatedResultMessage::deserialize(CustomDataInput *input) {
    this->_yesYouCanFunc(input);
}

void CharacterCanBeCreatedResultMessage::_yesYouCanFunc(CustomDataInput *input) {
    this->yesYouCan = input->readBoolean();
}
