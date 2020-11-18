#ifndef EXITHAVENBAGREQUESTMESSAGE_H
#define EXITHAVENBAGREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExitHavenBagRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif