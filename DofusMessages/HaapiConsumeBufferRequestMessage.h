#ifndef HAAPICONSUMEBUFFERREQUESTMESSAGE_H
#define HAAPICONSUMEBUFFERREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HaapiConsumeBufferRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif