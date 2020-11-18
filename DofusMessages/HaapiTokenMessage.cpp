#include "HaapiTokenMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HaapiTokenMessage::deserialize(CustomDataInput *input) {
    this->_tokenFunc(input);
}

void HaapiTokenMessage::_tokenFunc(CustomDataInput *input) {
    this->token = input->readUTF();
}
