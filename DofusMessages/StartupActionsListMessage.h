#ifndef STARTUPACTIONSLISTMESSAGE_H
#define STARTUPACTIONSLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/StartupActionAddObject.h"

#include <string>
#include <vector>

class StartupActionsListMessage : public DeserializeInterface {
public:
    std::vector<StartupActionAddObject> actions;

    void deserialize(CustomDataInput *input);

private:
};

#endif