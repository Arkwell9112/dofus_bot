#ifndef LIVINGOBJECTMESSAGEREQUESTMESSAGE_H
#define LIVINGOBJECTMESSAGEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class LivingObjectMessageRequestMessage : public DeserializeInterface {
public:
    unsigned int msgId = 0;
    std::vector<std::string> parameters;
    unsigned int livingObject = 0;

    void deserialize(CustomDataInput *input);

private:
    void _msgIdFunc(CustomDataInput *input);

    void _parametersFunc(CustomDataInput *input);

    void _livingObjectFunc(CustomDataInput *input);
};

#endif