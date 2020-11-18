#include "CharacterSelectionMessage.h"
#include "CharacterFirstSelectionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterFirstSelectionMessage::deserialize(CustomDataInput *input) {
    CharacterSelectionMessage::deserialize(input);
    this->_doTutorialFunc(input);
}

void CharacterFirstSelectionMessage::_doTutorialFunc(CustomDataInput *input) {
    this->doTutorial = input->readBoolean();
}
