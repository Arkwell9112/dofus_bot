#include "ExchangeMountSterilizeFromPaddockMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeMountSterilizeFromPaddockMessage::deserialize(CustomDataInput *input) {
    this->_nameFunc(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_sterilizatorFunc(input);
}

void ExchangeMountSterilizeFromPaddockMessage::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}

void ExchangeMountSterilizeFromPaddockMessage::_worldXFunc(CustomDataInput *input) {
    this->worldX = input->readShort();
    if (this->worldX < -255 || this->worldX > 255) {

    }
}

void ExchangeMountSterilizeFromPaddockMessage::_worldYFunc(CustomDataInput *input) {
    this->worldY = input->readShort();
    if (this->worldY < -255 || this->worldY > 255) {

    }
}

void ExchangeMountSterilizeFromPaddockMessage::_sterilizatorFunc(CustomDataInput *input) {
    this->sterilizator = input->readUTF();
}
