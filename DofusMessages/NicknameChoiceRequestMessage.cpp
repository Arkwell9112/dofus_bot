#include "NicknameChoiceRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void NicknameChoiceRequestMessage::deserialize(CustomDataInput *input) {
    this->_nicknameFunc(input);
}

void NicknameChoiceRequestMessage::_nicknameFunc(CustomDataInput *input) {
    this->nickname = input->readUTF();
}
