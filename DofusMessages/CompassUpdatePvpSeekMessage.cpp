#include "CompassUpdatePvpSeekMessage.h"
#include "CompassUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CompassUpdatePvpSeekMessage::deserialize(CustomDataInput *input) {
    CompassUpdateMessage::deserialize(input);
    this->_memberIdFunc(input);
    this->_memberNameFunc(input);
}

void CompassUpdatePvpSeekMessage::_memberIdFunc(CustomDataInput *input) {
    this->memberId = input->readVarUhLong();
    if (this->memberId < 0 || this->memberId > 9007199254740990) {

    }
}

void CompassUpdatePvpSeekMessage::_memberNameFunc(CustomDataInput *input) {
    this->memberName = input->readUTF();
}
