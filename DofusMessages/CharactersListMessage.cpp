#include "CharactersListMessage.h"
#include "BasicCharactersListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharactersListMessage::deserialize(CustomDataInput *input) {
    BasicCharactersListMessage::deserialize(input);
    this->_hasStartupActionsFunc(input);
}

void CharactersListMessage::_hasStartupActionsFunc(CustomDataInput *input) {
    this->hasStartupActions = input->readBoolean();
}
