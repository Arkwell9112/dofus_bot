#include "HaapiApiKeyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HaapiApiKeyMessage::deserialize(CustomDataInput *input) {
    this->_tokenFunc(input);
}

void HaapiApiKeyMessage::_tokenFunc(CustomDataInput *input) {
    this->token = input->readUTF();
}
