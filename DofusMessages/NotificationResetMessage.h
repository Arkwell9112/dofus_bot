#ifndef NOTIFICATIONRESETMESSAGE_H
#define NOTIFICATIONRESETMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class NotificationResetMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif