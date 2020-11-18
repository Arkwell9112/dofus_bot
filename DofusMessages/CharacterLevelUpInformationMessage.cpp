#include "CharacterLevelUpMessage.h"
#include "CharacterLevelUpInformationMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterLevelUpInformationMessage::deserialize(CustomDataInput *input) {
    CharacterLevelUpMessage::deserialize(input);
    this->_nameFunc(input);
    this->_idFunc(input);
}

void CharacterLevelUpInformationMessage::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}

void CharacterLevelUpInformationMessage::_idFunc(CustomDataInput *input) {
    this->id = input->readVarUhLong();
    if (this->id < 0 || this->id > 9007199254740990) {

    }
}
