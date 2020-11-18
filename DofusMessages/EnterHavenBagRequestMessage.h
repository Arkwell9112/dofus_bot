#ifndef ENTERHAVENBAGREQUESTMESSAGE_H
#define ENTERHAVENBAGREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class EnterHavenBagRequestMessage : public DeserializeInterface {
public:
    double havenBagOwner = 0;

    void deserialize(CustomDataInput *input);

private:
    void _havenBagOwnerFunc(CustomDataInput *input);
};

#endif