#ifndef EDITHAVENBAGREQUESTMESSAGE_H
#define EDITHAVENBAGREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class EditHavenBagRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif