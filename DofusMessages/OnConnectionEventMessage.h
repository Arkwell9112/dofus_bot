#ifndef ONCONNECTIONEVENTMESSAGE_H
#define ONCONNECTIONEVENTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class OnConnectionEventMessage : public DeserializeInterface {
public:
    unsigned int eventType = 0;

    void deserialize(CustomDataInput *input);

private:
    void _eventTypeFunc(CustomDataInput *input);
};

#endif