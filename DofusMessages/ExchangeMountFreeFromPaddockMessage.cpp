#include "ExchangeMountFreeFromPaddockMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeMountFreeFromPaddockMessage::deserialize(CustomDataInput *input) {
    this->_nameFunc(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_liberatorFunc(input);
}

void ExchangeMountFreeFromPaddockMessage::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}

void ExchangeMountFreeFromPaddockMessage::_worldXFunc(CustomDataInput *input) {
    this->worldX = input->readShort();
    if (this->worldX < -255 || this->worldX > 255) {

    }
}

void ExchangeMountFreeFromPaddockMessage::_worldYFunc(CustomDataInput *input) {
    this->worldY = input->readShort();
    if (this->worldY < -255 || this->worldY > 255) {

    }
}

void ExchangeMountFreeFromPaddockMessage::_liberatorFunc(CustomDataInput *input) {
    this->liberator = input->readUTF();
}
