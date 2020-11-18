#ifndef HAAPISHOPAPIKEYREQUESTMESSAGE_H
#define HAAPISHOPAPIKEYREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HaapiShopApiKeyRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif