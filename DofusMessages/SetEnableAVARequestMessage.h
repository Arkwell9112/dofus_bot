#ifndef SETENABLEAVAREQUESTMESSAGE_H
#define SETENABLEAVAREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SetEnableAVARequestMessage : public DeserializeInterface {
public:
    bool enable = false;

    void deserialize(CustomDataInput *input);

private:
    void _enableFunc(CustomDataInput *input);
};

#endif