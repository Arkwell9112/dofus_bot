#ifndef CHANGEHAVENBAGROOMREQUESTMESSAGE_H
#define CHANGEHAVENBAGROOMREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ChangeHavenBagRoomRequestMessage : public DeserializeInterface {
public:
    unsigned int roomId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _roomIdFunc(CustomDataInput *input);
};

#endif