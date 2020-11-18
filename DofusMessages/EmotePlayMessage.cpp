#include "EmotePlayMessage.h"
#include "EmotePlayAbstractMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void EmotePlayMessage::deserialize(CustomDataInput *input) {
    EmotePlayAbstractMessage::deserialize(input);
    this->_actorIdFunc(input);
    this->_accountIdFunc(input);
}

void EmotePlayMessage::_actorIdFunc(CustomDataInput *input) {
    this->actorId = input->readDouble();
    if (this->actorId < -9007199254740990 || this->actorId > 9007199254740990) {

    }
}

void EmotePlayMessage::_accountIdFunc(CustomDataInput *input) {
    this->accountId = input->readInt();
    if (this->accountId < 0) {

    }
}
