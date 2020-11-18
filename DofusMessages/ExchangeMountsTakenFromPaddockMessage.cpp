#include "ExchangeMountsTakenFromPaddockMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeMountsTakenFromPaddockMessage::deserialize(CustomDataInput *input) {
    this->_nameFunc(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_ownernameFunc(input);
}

void ExchangeMountsTakenFromPaddockMessage::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}

void ExchangeMountsTakenFromPaddockMessage::_worldXFunc(CustomDataInput *input) {
    this->worldX = input->readShort();
    if (this->worldX < -255 || this->worldX > 255) {

    }
}

void ExchangeMountsTakenFromPaddockMessage::_worldYFunc(CustomDataInput *input) {
    this->worldY = input->readShort();
    if (this->worldY < -255 || this->worldY > 255) {

    }
}

void ExchangeMountsTakenFromPaddockMessage::_ownernameFunc(CustomDataInput *input) {
    this->ownername = input->readUTF();
}
