#ifndef STARTUPACTIONADDMESSAGE_H
#define STARTUPACTIONADDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/StartupActionAddObject.h"

#include <string>
#include <vector>

class StartupActionAddMessage : public DeserializeInterface {
public:
    StartupActionAddObject newAction;

    void deserialize(CustomDataInput *input);

private:
};

#endif