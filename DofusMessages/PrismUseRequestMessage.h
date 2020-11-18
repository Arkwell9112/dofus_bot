#ifndef PRISMUSEREQUESTMESSAGE_H
#define PRISMUSEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PrismUseRequestMessage : public DeserializeInterface {
public:
    unsigned int moduleToUse = 0;

    void deserialize(CustomDataInput *input);

private:
    void _moduleToUseFunc(CustomDataInput *input);
};

#endif