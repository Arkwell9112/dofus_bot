#ifndef NOTIFICATIONLISTMESSAGE_H
#define NOTIFICATIONLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class NotificationListMessage : public DeserializeInterface {
public:
    std::vector<int> flags;

    void deserialize(CustomDataInput *input);

private:
    void _flagsFunc(CustomDataInput *input);
};

#endif