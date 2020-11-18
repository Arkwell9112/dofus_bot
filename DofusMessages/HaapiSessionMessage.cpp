#include "HaapiSessionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HaapiSessionMessage::deserialize(CustomDataInput *input) {
    this->_keyFunc(input);
    this->_typeFunc(input);
}

void HaapiSessionMessage::_keyFunc(CustomDataInput *input) {
    this->key = input->readUTF();
}

void HaapiSessionMessage::_typeFunc(CustomDataInput *input) {
    this->type = input->readByte();
    if (this->type < 0) {

    }
}
