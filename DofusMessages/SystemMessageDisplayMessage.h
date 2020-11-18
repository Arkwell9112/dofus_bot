#ifndef SYSTEMMESSAGEDISPLAYMESSAGE_H
#define SYSTEMMESSAGEDISPLAYMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SystemMessageDisplayMessage : public DeserializeInterface {
public:
    bool hangUp = false;
    unsigned int msgId = 0;
    std::vector<std::string> parameters;

    void deserialize(CustomDataInput *input);

private:
    void _hangUpFunc(CustomDataInput *input);

    void _msgIdFunc(CustomDataInput *input);

    void _parametersFunc(CustomDataInput *input);
};

#endif