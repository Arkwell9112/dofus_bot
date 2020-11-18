#include "HavenBagDailyLoteryMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HavenBagDailyLoteryMessage::deserialize(CustomDataInput *input) {
    this->_returnTypeFunc(input);
    this->_gameActionIdFunc(input);
}

void HavenBagDailyLoteryMessage::_returnTypeFunc(CustomDataInput *input) {
    this->returnType = input->readByte();
    if (this->returnType < 0) {

    }
}

void HavenBagDailyLoteryMessage::_gameActionIdFunc(CustomDataInput *input) {
    this->gameActionId = input->readUTF();
}
