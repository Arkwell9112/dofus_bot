#ifndef BULLETINMESSAGE_H
#define BULLETINMESSAGE_H

#include "SocialNoticeMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BulletinMessage : public SocialNoticeMessage {
public:
    unsigned int lastNotifiedTimestamp = 0;

    void deserialize(CustomDataInput *input);

private:
    void _lastNotifiedTimestampFunc(CustomDataInput *input);
};

#endif