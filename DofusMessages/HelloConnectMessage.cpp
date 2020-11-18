#include "HelloConnectMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HelloConnectMessage::deserialize(CustomDataInput *input) {
    int _val2 = 0;
    this->_saltFunc(input);
    unsigned int _keyLen = input->readVarInt();
    for (unsigned int _i2 = 0; _i2 < _keyLen; _i2++) {
        _val2 = input->readByte();
        this->key.push_back(_val2);
    }
}

void HelloConnectMessage::_saltFunc(CustomDataInput *input) {
    this->salt = input->readUTF();
}

void HelloConnectMessage::_keyFunc(CustomDataInput *input) {
    int _val = input->readByte();
    this->key.push_back(_val);
}
