#ifndef ADMINQUIETCOMMANDMESSAGE_H
#define ADMINQUIETCOMMANDMESSAGE_H

#include "AdminCommandMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AdminQuietCommandMessage : public AdminCommandMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif