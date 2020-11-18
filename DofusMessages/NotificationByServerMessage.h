#ifndef NOTIFICATIONBYSERVERMESSAGE_H
#define NOTIFICATIONBYSERVERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class NotificationByServerMessage : public DeserializeInterface {
public:
    unsigned int id = 0;
    std::vector<std::string> parameters;
    bool forceOpen = false;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);

    void _parametersFunc(CustomDataInput *input);

    void _forceOpenFunc(CustomDataInput *input);
};

#endif