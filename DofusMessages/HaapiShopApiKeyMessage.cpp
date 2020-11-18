#include "HaapiShopApiKeyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HaapiShopApiKeyMessage::deserialize(CustomDataInput *input) {
    this->_tokenFunc(input);
}

void HaapiShopApiKeyMessage::_tokenFunc(CustomDataInput *input) {
    this->token = input->readUTF();
}
