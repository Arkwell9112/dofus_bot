#ifndef HAAPIBUFFERLISTREQUESTMESSAGE_H
#define HAAPIBUFFERLISTREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HaapiBufferListRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif