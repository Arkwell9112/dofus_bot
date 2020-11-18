#ifndef NOTIFICATIONUPDATEFLAGMESSAGE_H
#define NOTIFICATIONUPDATEFLAGMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class NotificationUpdateFlagMessage : public DeserializeInterface {
public:
    unsigned int index = 0;

    void deserialize(CustomDataInput *input);

private:
    void _indexFunc(CustomDataInput *input);
};

#endif