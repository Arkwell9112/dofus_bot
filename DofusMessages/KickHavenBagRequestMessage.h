#ifndef KICKHAVENBAGREQUESTMESSAGE_H
#define KICKHAVENBAGREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class KickHavenBagRequestMessage : public DeserializeInterface {
public:
    double guestId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _guestIdFunc(CustomDataInput *input);
};

#endif