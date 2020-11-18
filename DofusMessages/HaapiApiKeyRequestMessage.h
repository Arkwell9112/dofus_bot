#ifndef HAAPIAPIKEYREQUESTMESSAGE_H
#define HAAPIAPIKEYREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HaapiApiKeyRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif