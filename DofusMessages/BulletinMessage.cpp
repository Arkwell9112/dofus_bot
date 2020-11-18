#include "SocialNoticeMessage.h"
#include "BulletinMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BulletinMessage::deserialize(CustomDataInput *input) {
    SocialNoticeMessage::deserialize(input);
    this->_lastNotifiedTimestampFunc(input);
}

void BulletinMessage::_lastNotifiedTimestampFunc(CustomDataInput *input) {
    this->lastNotifiedTimestamp = input->readInt();
    if (this->lastNotifiedTimestamp < 0) {

    }
}
