#include "SocialNoticeSetErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SocialNoticeSetErrorMessage::deserialize(CustomDataInput *input) {
    this->_reasonFunc(input);
}

void SocialNoticeSetErrorMessage::_reasonFunc(CustomDataInput *input) {
    this->reason = input->readByte();
    if (this->reason < 0) {

    }
}
