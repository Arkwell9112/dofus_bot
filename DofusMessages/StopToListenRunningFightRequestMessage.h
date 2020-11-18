#ifndef STOPTOLISTENRUNNINGFIGHTREQUESTMESSAGE_H
#define STOPTOLISTENRUNNINGFIGHTREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class StopToListenRunningFightRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif