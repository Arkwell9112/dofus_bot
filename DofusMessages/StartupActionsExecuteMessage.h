#ifndef STARTUPACTIONSEXECUTEMESSAGE_H
#define STARTUPACTIONSEXECUTEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class StartupActionsExecuteMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif